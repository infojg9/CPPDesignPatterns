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

class CSingleton {
public:
  /// Return the single instance of this class
  static CSingleton &GetInstanceV1();
  static CSingleton &GetInstanceV2();

  /// Return some class-specific single-instance state
  std::thread::id GetThreadId();

  // Prevent construction and copying of this class
  CSingleton() = default;
  ~CSingleton() = default;
  CSingleton(const CSingleton &) = delete;
  const CSingleton &operator =(const CSingleton &) = delete;
};

} /// namespace v1
} /// namespace Singleton
