/*
 * \file      CSignalSlotImpl.cpp
 * \author    https://github.com/infojg9
 * \brief     An example of Async Notification design pattern implementation
 *            signal slot using C++11 library
 * \copyright MIT/BSD Redistributable License
 */

#include "CSignalSlotType1.h"

namespace SignalSlot {
namespace V1 {

class SignalSlotUser {
public:
  SignalSlotUser(std::string const& name)
  : m_userName(name) {}

  CSignalSlotType1<std::string const&> m_eventId;

  void eventCollector(std::string const& message) {
    std::cout<<std::endl<<m_userName<<__func__<<"(): received: "<<message<<std::endl;
  }

private:
  std::string m_userName;
};

} /// namespace V1
} /// namespace SignalSlot
