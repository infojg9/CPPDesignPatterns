/*
 * \file      main.cpp
 * \author    https://github.com/infojg9
 * \brief     Various Modern OOPS Design Pattern implementations
 * \copyright MIT/BSD Redistributable License
 */

#include "CPointerToImplementation.h"
#include "CSingleton.h"

#include <mutex>
#include <cstring>
#include <sys/resource.h>

using namespace std;

void singleTonSafeInitV1(uint8_t ucType) {

  switch(ucType) {
    case 1: {
      Singleton::V1::CSingleton &obCSingleton1 = Singleton::V1::CSingleton::GetInstanceV1();
      cout<<"Called by Thread Id: "<<obCSingleton1.GetThreadId()<<endl;
      break;
    }
    case 2: {
      Singleton::V1::CSingleton &obCSingleton2 = Singleton::V1::CSingleton::GetInstanceV2();
      cout<<"Called by Thread Id: "<<obCSingleton2.GetThreadId()<<endl;
      break;
    }
    default:
      cout<<"Invalid input: "<<ucType<<endl;
  }
}

int main() {

  Pimple::V1::CPointerToImplementation obPimple("PimpleTestObject1");

  thread t1(singleTonSafeInitV1, 1), t2(singleTonSafeInitV1, 2);

  /// Tweaking Main User Thread with Scheduling and Priority
  sched_param sch;
  int policy;
  pthread_getschedparam(pthread_self(), &policy, &sch);
  pthread_attr_t thAttr;
  int max_prio_for_policy = 0;

  pthread_attr_init(&thAttr);
  pthread_attr_getschedpolicy(&thAttr, &policy);
  max_prio_for_policy = sched_get_priority_max(policy);
  pthread_setschedprio(pthread_self(), max_prio_for_policy);
  pthread_attr_destroy(&thAttr);

  std::cout << "main ThreadId: " << pthread_self() << ", Priority: "
            << sch.sched_priority <<", Policy: "<<policy<<std::endl;

  pthread_getschedparam(t1.native_handle(), &policy, &sch);
  sch.sched_priority = PRIO_MAX;
  /// For Windows, use THREAD_PRIORITY_HIGHEST for Priority with these apis:
  /// GetPriorityClass(), SetPriorityClass(), SetThreadPriority(), GetThreadPriority()
  if (!pthread_setschedparam(t1.native_handle(), SCHED_RR, &sch)) {
    std::cout<<"t1 thread: Failed to pthread_setschedparam: "<<strerror(errno)<<std::endl;
  }


  pthread_getschedparam(t1.native_handle(), &policy, &sch);
  std::cout << "t1 ThreadId: " << t1.get_id() << ", Priority: "
            << sch.sched_priority <<", Policy: "<<policy<<std::endl;

  pthread_getschedparam(t2.native_handle(), &policy, &sch);
  std::cout << "t2 ThreadId: " << t2.get_id() << ", Priority: "
            << sch.sched_priority <<", Policy: "<<policy<<std::endl;

  t1.join();
  t2.join();

  for (size_t i = 0; i < 9; ++i) {
    cout << "*";
  }

  cout << "Hello, World!" <<endl;
  return 0;
}
