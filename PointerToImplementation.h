/*
 * MIT/BSD Redistributable License
 * Author: https://github.com/infojg9
 */

#pragma once

#ifdef _WIN32
  #include <windows.h>
#else
  #include <sys/time.h>
#endif

#include <string>
#include <memory>

namespace Pimple {
namespace V1 {

class PointerToImplementation {
  class Impl;
  using ImplPtr = std::unique_ptr<Impl>;

public:
  explicit PointerToImplementation(std::string const& name);
  ~PointerToImplementation();
  PointerToImplementation(PointerToImplementation const&) = delete;
  PointerToImplementation& operator=(PointerToImplementation const&) = delete;
  PointerToImplementation(PointerToImplementation&&) = default;
  PointerToImplementation& operator=(PointerToImplementation&&) = default;

  ImplPtr m_pImpl;
  ImplPtr&& getImplPtr();
};

} /// namespace v1
} /// namespace Pimple1
