/*
 * \file      CPointerToImplementation.h
 * \author    https://github.com/infojg9
 * \brief     An example of the PIMPL Design / Pointer to Implementation.
 *            A special case for Bridge design pattern
 *            The term Pimpl was first introduced by Jeff Sumner (Sutter, 1999)
 *            A mechanism to maintain a strong separation between Interface
 *            and Implementation (Sutter and Alexandrescu, 2004).
 *            Use the Pimpl pattern to keep implementation details out of
 *            Interface public header files.
 *            Advantages: Information hiding, Reduced coupling, Short compile time,
 *            Better binary compatibility.
 *            Disadvantages: Large Object size,
 *            Little performance hit for the extra pointer access,
 *            Loose compiler checking within const methods.
 * \copyright MIT/BSD Redistributable License
 */

#pragma once

#ifdef _WIN32
  #include <windows.h>
#else
  #include <sys/time.h>
#endif

#include <iostream>
#include <string>
#include <memory>

namespace Pimple {
namespace V1 {

/// \class CPointerToImplementation Pimple class declaration
class CPointerToImplementation {
  /// Keeping Impl details out of public header PointerToImplementation
  class Impl;
  using ImplPtr = std::unique_ptr<Impl>;

public:
  explicit CPointerToImplementation(std::string const& name);
  ~CPointerToImplementation();
  CPointerToImplementation(CPointerToImplementation const&) = delete;
  CPointerToImplementation& operator=(CPointerToImplementation const&) = delete;
  CPointerToImplementation(CPointerToImplementation&&) = default;
  CPointerToImplementation& operator=(CPointerToImplementation&&) = default;

  ImplPtr m_pImpl;
  ImplPtr&& getImplPtr();
};

} /// namespace V1
} /// namespace Pimple
