/*
 * \file      CFactoryMaker.h
 * \author    https://github.com/infojg9
 * \brief     An example of Factory design pattern header
 * \copyright MIT/BSD Redistributable License
 */

#include "IFactoryInterface.h"

#include <iostream>
#include <string>
#include <map>

#pragma once

namespace Factory {
namespace V1 {

/// \class    CFactoryMaker A factory maker class for creating generic
///           3D renderers with dynamic subscription capability
class CFactoryMaker
{
public:
  /// The type for the callback that creates an IFactoryInterface instance
  using fpCallbackPtr = IFactoryInterface *(*)();

  /// Add a new 3D renderer to the system
  static void RegisterRenderer(const std::string &type,
                               fpCallbackPtr cb);
  /// Remove an existing 3D renderer from the system
  static void UnregisterRenderer(const std::string &type);

  /// Create an instance of a named 3D renderer
  static IFactoryInterface *CreateRenderer(const std::string &type);

private:
  typedef std::map<std::string, fpCallbackPtr> CallbackMap;
  static CallbackMap mRenderers;
};

} /// namespace V1
} /// namespace Factory
