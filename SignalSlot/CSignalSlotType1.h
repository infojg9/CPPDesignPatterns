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

  CSignalSlotType1() : current_id_(0) {}

  // copy creates new CSignalSlotType1
  CSignalSlotType1(CSignalSlotType1 const& other) : current_id_(0) {}

  // connects a member function to this CSignalSlotType1
  template <typename T>
  int connect_member(T *inst, void (T::*func)(Params...)) {
    return connect([=](Params... params) {
      (inst->*func)(params...);
    });
  }

  // connects a const member function to this CSignalSlotType1
  template <typename T>
  int connect_member(T *inst, void (T::*func)(Params...) const) {
    return connect([=](Params... params) {
      (inst->*func)(params...);
    });
  }

  // connects a std::function to the CSignalSlotType1. The returned
  // value can be used to disconnect the function again
  int connect(std::function<void(Params...)> const& slot) const {
    slots_.insert(std::make_pair(++current_id_, slot));
    return current_id_;
  }

  // disconnects a previously connected function
  void disconnect(int id) const {
    slots_.erase(id);
  }

  // disconnects all previously connected functions
  void disconnect_all() const {
    slots_.clear();
  }

  // calls all connected functions
  void emit(Params... p) {
    for(auto it : slots_) {
      it.second(p...);
    }
  }

  // assignment creates new CSignalSlotType1
  CSignalSlotType1& operator=(CSignalSlotType1 const& other) {
    disconnect_all();
  }

private:
  mutable std::map<int, std::function<void(Params...)>> slots_;
  mutable int current_id_;
};

} /// namespace V1
} /// namespace SignalSlot
