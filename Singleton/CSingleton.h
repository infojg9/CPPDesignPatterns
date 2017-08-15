/*
 * \file      CSingleton.h
 * \author    https://github.com/infojg9
 * \brief     An example of Thread safe singleton design implementation.
 * \copyright MIT/BSD Redistributable License
 */

#include <iostream>
#include <thread>

#pragma once

namespace Singleton {
namespace V1 {

/// \class CSingleton Thread safe Singleton class
class CSingleton {
public:
  /// Return the single instance of this class
  static CSingleton& GetInstanceV1();
  template<typename Container>
  decltype(auto) GetInstanceV2(Container&& c);
  static CSingleton& GetInstanceV3();

  /// Return some class-specific single-instance state
  std::thread::id GetThreadId();

  // Prevent construction and copying of this class
  CSingleton() = default;
  ~CSingleton() = default;
  CSingleton(const CSingleton &) = delete;
  const CSingleton &operator =(const CSingleton &) = delete;
  CSingleton(CSingleton&& rhs) = default; /// allow C++11 move assignment operator
  CSingleton& operator=(CSingleton&& rhs) = default; /// allow C++11 move assignment operator
};

} /// namespace V1
} /// namespace Singleton
