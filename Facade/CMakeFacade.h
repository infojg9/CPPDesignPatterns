/*
 * \file      CMakeFacade.h
 * \author    https://github.com/infojg9
 * \brief     An example of CMakeFacade design pattern header
 * \copyright MIT/BSD Redistributable License
 */

#include <iostream>
#include <string>
#include <map>

#pragma once

namespace Facade {
namespace V1 {

/// \class CMakeFacade An facade base class which abstracts it's internals
class CMakeFacade
{
public:
  CMakeFacade();
  ~CMakeFacade();

  /// Simple activity action
  bool Action1();

private:
  CMakeFacade(const CMakeFacade &);
  const CMakeFacade &operator =(const CMakeFacade &);

  class Impl;
  Impl *mImpl;
};

} /// namespace V1
} /// namespace Facade
