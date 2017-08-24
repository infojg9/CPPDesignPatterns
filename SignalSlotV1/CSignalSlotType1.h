/*
 * \file      CSignalSlotType1.h
 * \author    https://github.com/infojg9
 * \brief     An example of Async Notification design pattern
 *            signal slot using C++11 library
 * \copyright MIT/BSD Redistributable License
 */

#include <iostream>
#include <functional>
#include <map>

#pragma once

namespace SignalSlot {
namespace V1 {

template <typename... Params>
class CSignalSlotType1 {

public:

  CSignalSlotType1() : m_currentId(0) {}

  // copy creates new CSignalSlotType1
  CSignalSlotType1(CSignalSlotType1 const& other) : m_currentId(0) {}

  // connects a member function to this CSignalSlotType1
  template <typename T>
  int connect_member(T *inst, void (T::*func)(Params...)) {
    return connect([=](Params... params) {
      (inst->*func)(params...);
    });
  }

  // connects to CSignalSlotType1
  template <typename T>
  int connect_member(T *inst, void (T::*func)(Params...) const) {
    return connect([=](Params... params) {
      (inst->*func)(params...);
    });
  }

  // connects with std::function to CSignalSlotType1
  int connect(std::function<void(Params...)> const& slot) const {
    m_slotToFptrMap.insert(std::make_pair(++m_currentId, slot));
    return m_currentId;
  }

  /// disconnects from connected function
  void disconnect(int id) const {
    m_slotToFptrMap.erase(id);
  }

  /// For all disconnection of connected functions
  void disconnect_all() const {
    m_slotToFptrMap.clear();
  }

  /// Calling all connected functions
  void emit(Params... p) {
    for(auto it : m_slotToFptrMap) {
      it.second(p...);
    }
  }

  // Assignment always creates new CSignalSlotType1 type
  CSignalSlotType1& operator=(CSignalSlotType1 const& other) {
    disconnect_all();
  }

private:
  mutable std::map<int, std::function<void(Params...)>> m_slotToFptrMap;
  mutable int m_currentId;
};

} /// namespace V1
} /// namespace SignalSlot
