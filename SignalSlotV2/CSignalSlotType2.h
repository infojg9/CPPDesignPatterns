/*
 * \file      CSignalSlotType2.h
 * \author    https://github.com/infojg9
 * \brief     An example of C++14 thread-safe async Notification design pattern
 *            signal slot
 * \copyright MIT/BSD Redistributable License
 */

#include <iostream>
#include <cstddef>
#include <string>
#include <utility>
#include <vector>
#include <memory>
#include <mutex>
#include <functional>
#include <type_traits>
#include <initializer_list>

#pragma once

namespace SignalSlot {
namespace V2 {

template <std::size_t... Params>
class Container {
};

template <std::size_t N, std::size_t... Params>
class MakeContainer : public MakeContainer<N - 1, N - 1, Params...> {
};

template <std::size_t... Params>
class MakeContainer<0, Params...> : public Container<Params...> {
};

template <std::size_t>
class Contents {
};

} /// namespace V2
} /// namespace SignalSlot

namespace std {
/// Custom std::is_placeholder to allow user-defined SignalSlot::V2::Contents types.
template <size_t N>
class is_placeholder<SignalSlot::V2::Contents<N>>
: public integral_constant<std::size_t, N + 1>
{};
}

namespace SignalSlot {
namespace V2 {

/// Allow selection of unique member call from multiple overloaded calls
template <typename... Args>
struct Usage {
  template <typename ClassType, typename ReturnType>
  static auto overloadOf(ReturnType (ClassType::*FuncionType)(Args...))
  {
    return FuncionType;
  }
};

class CommonConnect {
  template <typename>
  friend class SignalV2;

public:
  void makeDisconnect()
  {
    if (deleteType) deleteType();
  }

private:
  std::function<void()> deleteType;
};

using MakeConnect = std::shared_ptr<CommonConnect>;

/// MakeVoidFn is required for generating call type based on the return
/// type of the signal is void or non void type.
template <typename T>
class MakeVoidFn {

public:
  using func = std::function<void(T)>;
};

/// Ensuring void return types
template <>
class MakeVoidFn<void> {
public:
  using func = std::function<void()>;
};

template <typename>
class SignalV2;

template <typename ReturnType, typename... Args>
class SignalV2<ReturnType(Args...)> {
  using SlotV2 = std::function<ReturnType(Args...)>;

  class EntryPoint {
  public:
    EntryPoint(SlotV2 const& slot, MakeConnect conn)
    : m_slotInfo(slot), m_connInfo(conn), m_signalInfo(nullptr)
    {}

    EntryPoint(SlotV2&& slot, MakeConnect conn)
    : m_slotInfo(std::move(slot)), m_connInfo(conn), m_signalInfo(nullptr)
    {}

    EntryPoint(SignalV2 *signal, MakeConnect conn)
    : m_connInfo(conn), m_signalInfo(signal)
    {}

    SlotV2 const& slot() const
    {
      return m_slotInfo;
    }

    SignalV2* signal() const
    {
      return m_signalInfo;
    }

    MakeConnect conn() const
    {
      return m_connInfo;
    }

  private:
    SlotV2 m_slotInfo;
    MakeConnect m_connInfo;
    SignalV2 *m_signalInfo;
  };

  using EntryContainer = std::vector<EntryPoint>;
  using LockType       = std::lock_guard<std::mutex>;

public:
  using RetType = ReturnType;
  using SlotType = SlotV2;

  SignalV2() = default;

  virtual ~SignalV2()
  {
    LockType lock(m_locks);
    for (auto& entry : m_containers)
    {
      auto conn = entry.conn();
      if (conn) {
        conn->deleteType = nullptr;
      }
    }
  }

  SignalV2(SignalV2 const& signal)
  {
    LockType lock1(m_locks);
    LockType lock2(const_cast<SignalV2 &>(signal).m_locks);
    m_containers = signal.m_containers;
  }

  SignalV2 &operator=(SignalV2 const& signal)
  {
    LockType lock1(m_locks);
    LockType lock2(const_cast<SignalV2 &>(signal).m_locks);
    m_containers = signal.m_containers;
    return *this;
  }

  SignalV2(SignalV2&& signal) = default;
  SignalV2 &operator=(SignalV2&& signal) = default;

  MakeConnect connect(SlotV2 const& slot)
  {
    LockType lock(m_locks);
    auto conn = makeConnection();
    m_containers.emplace_back(EntryPoint(slot, conn));
    return conn;
  }

  MakeConnect connect(SlotV2&& slot)
  {
    LockType lock(m_locks);
    auto conn = makeConnection();
    m_containers.emplace_back(EntryPoint(std::move(slot), conn));
    return conn;
  }

  template <typename InsType, typename FuncionType>
  MakeConnect connect(InsType *instance, FuncionType InsType::*mf)
  {
    LockType lock(m_locks);
    auto slot = attachInsToFn(instance, mf);
    auto conn = makeConnection();
    m_containers.emplace_back(EntryPoint(slot, conn));
    return conn;
  }

  /// Ensure all the slots of the connected are called when the Signal called
  MakeConnect connect(SignalV2& signal)
  {
    LockType lock(m_locks);
    auto conn = makeConnection();
    m_containers.emplace_back(EntryPoint(&signal, conn));
    return conn;
  }

  void clearAll()
  {
    LockType lock(m_locks);
    auto end = m_containers.end();
    for (auto it = m_containers.begin(); it != end; it++) {
      clearConnection(it);
    }
  }

  void makeDisconnect(MakeConnect conn = nullptr)
  {
    if (!conn)
    {
      clearAll();
      return;
    }

    LockType lock(m_locks);

    auto end = m_containers.end();
    for (auto it = m_containers.begin(); it != end; it++) {
      if (it->conn() == conn) {
        clearConnection(it);
      }
    }
  }

  void makeDisconnect(SignalV2& signal)
  {
    LockType lock(m_locks);
    auto end = m_containers.end();
    for (auto it = m_containers.begin(); it != end; it++) {
      if (it->signal() == &signal) {
        clearConnection(it);
      }
    }
  }

  void operator()(Args &&... args)
  {
    LockType lock(m_locks);
    for (auto &entry : m_containers) {
      auto *sig = entry.signal();
      if (sig) {
        (*sig)(std::forward<Args>(args)...);
      }
      else {
        entry.slot()(std::forward<Args>(args)...);
      }
    }
  }

  template <typename RetType = typename MakeVoidFn<ReturnType>::func>
  void operator()(const ReturnType &retFunc, Args &&... args)
  {
    static_assert(!isVoidReturn(), "Expecting non void return type here");

    LockType lock(m_locks);
    for (auto& entry : m_containers)
    {
      auto *sig = entry.signal();
      if (sig)
      {
        (*sig)(retFunc, std::forward<Args>(args)...);
      }
      else
      {
        retFunc(entry.slot()(std::forward<Args>(args)...));
      }
    }
  }

private:
  MakeConnect makeConnection()
  {
    auto conn = std::make_shared<CommonConnect>();
    conn->deleteType = [this, conn] { this->makeDisconnect(conn); };
    return conn;
  }

  void clearConnection(typename EntryContainer::iterator it)
  {
    auto conn = it->conn();
    if (conn) {
      conn->deleteType = nullptr;
    }
    m_containers.erase(it);
  }

  template <typename InsType, typename FuncionType, std::size_t... Params>
  auto attachInsToFn(InsType *instance, FuncionType InsType::*mf, Container<Params...>)
  {
    return std::bind(mf, instance, Contents<Params>()...);
  }

  template <typename InsType, typename FuncionType>
  SlotV2 attachInsToFn(InsType *instance, FuncionType InsType::*mf)
  {
    return attachInsToFn(instance, mf, MakeContainer<sizeof...(Args)>());
  }

  static constexpr bool isVoidReturn()
  {
    return std::is_void<ReturnType>::value;
  }

  EntryContainer m_containers;
  std::mutex m_locks;
};

} /// namespace V2
} /// namespace SignalSlot
