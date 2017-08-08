/*
 * \file      CSingleton.cpp
 * \author    https://github.com/infojg9
 * \brief     An example of Thread safe singleton design implementation.
 * \copyright MIT/BSD Redistributable License
 */

#include "CSingleton.h"

#include <thread>
#include <mutex>
#include <chrono>
#include <cstring>
#include <pthread.h>
#include <sys/resource.h>

namespace Singleton {
namespace V1 {

std::mutex mutexLock;

CSingleton& CSingleton::GetInstanceV1()
{
  static CSingleton instance;
  return instance;
}

/// Optimised locking: Double Check Locking Pattern (DCLP)
CSingleton& CSingleton::GetInstanceV2() {
  static CSingleton *instance = nullptr;

  /// Tweaking User Thread with Scheduling and Priority
  sched_param sch;
  int policy;
  pthread_getschedparam(pthread_self(), &policy, &sch);

  sch.sched_priority = PRIO_MAX; /// For Windows, use THREAD_PRIORITY_HIGHEST
  if (!pthread_setschedparam(pthread_self(), SCHED_RR, &sch)) {
    std::cout<<"Failed to pthread_setschedparam: "<<strerror(errno)<<std::endl;
  }

  if (!instance) {  /// lock check #1
    std::lock_guard<std::mutex> lock(mutexLock);
    std::cout << "ThreadId: " << std::this_thread::get_id() << " executing at priority "
              << sch.sched_priority <<std::endl;

    if (!instance) { /// lock check #2
      instance = new CSingleton();
      std::cout << "ThreadId: " << std::this_thread::get_id() << " executing at priority "
                << sch.sched_priority <<std::endl;
    }
  } // check #1
  return *instance;
}

std::thread::id CSingleton::GetThreadId()
{
  return std::this_thread::get_id();
}

} /// namespace V1
} /// namespace Singleton
