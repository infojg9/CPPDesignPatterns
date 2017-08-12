/*
 * \file      main.cpp
 * \author    https://github.com/infojg9
 * \brief     Various Modern OOPS Design Pattern implementations
 * \copyright MIT/BSD Redistributable License
 */

#include "CPointerToImplementation.h"
#include "CSingleton.h"
#include "CFactoryMaker.h"
#include "CFactoryMakerConsumer.cpp"
#include "CObserverEventCollector.cpp"
#include "CObserverConsumer.cpp"

/// Boost integration
#include <boost/type_index.hpp>

#include <mutex>
#include <cstring>
#include <sys/resource.h>

#ifdef _WIN32
#include <windows.h>
typedef uint32_t DWORD;
__pragma(message("Building on Linux:"))
#elif __APPLE__
__pragma(message("Building on Apple OS:"))
#elif __linux__
#define GNU_READY 1
#define debug_print(fmt, ...) \
        do { if (DEBUG) fprintf(stderr, "%s:%d:%s(): " fmt, __FILE__, \
                                __LINE__, __func__, __VA_ARGS__); } while (0)
#endif

/// Generic TODO message writer macro
#define STRTYPE(x) #x
#define STR(x) STRTYPE(x)
#define TODO(x) __pragma(message(" TODO: " STRTYPE(x) " :: " __FILE__ "@" STR(__LINE__)))

using namespace std;

/// Global Wrapper api for calling Singleton::V1::CSingleton::GetInstanceVX()
template<typename Type>
void singleTonSafeInitV1(Type const& typeId)
{
  using boost::typeindex::type_id_with_cvr;
  cout<<"boost::typeindex Type: "<<type_id_with_cvr<Type>().pretty_name()<<endl;
  cout<<"boost::typeindex param: "<<type_id_with_cvr<decltype(typeId)>().pretty_name()<<endl;

  switch(typeId) {
    case 1: {
      Singleton::V1::CSingleton &obCSingleton1 = Singleton::V1::CSingleton::GetInstanceV1();
      cout<<endl<<"Called by Thread Id: "<<obCSingleton1.GetThreadId()<<endl;
      break;
    }
    case 2: {
      Singleton::V1::CSingleton &obCSingleton2 = Singleton::V1::CSingleton::GetInstanceV3();
      cout<<endl<<"Called by Thread Id: "<<obCSingleton2.GetThreadId()<<endl;
      break;
    }
    default:
      cout<<"Error: Invalid input: "<<typeId<<endl;
  }
}

int main()
{
  /// CPointerToImplementation class test case
  Pimple::V1::CPointerToImplementation obPimple("PimpleTestObject1");

  /// Singleton::V1::CSingleton class test case
  thread t1(singleTonSafeInitV1<uint32_t>, 1);
  thread t2(singleTonSafeInitV1<uint32_t>, 2);

  /// Accessing and Tweaking Main User Thread with Scheduling and Priority
  /// for each thread of Singleton::V1::CSingleton
  sched_param schParam;
  int policy;
  pthread_getschedparam(pthread_self(), &policy, &schParam);
  pthread_attr_t threadAttribute;
  int max_prio_for_policy = 0;

  pthread_attr_init(&threadAttribute);
  pthread_attr_getschedpolicy(&threadAttribute, &policy);
  max_prio_for_policy = sched_get_priority_max(policy);
  pthread_setschedprio(pthread_self(), max_prio_for_policy);
  pthread_attr_destroy(&threadAttribute);

  std::cout << "main ThreadId: " << pthread_self() << ", Priority: "
            << schParam.sched_priority <<", Policy: "<<policy<<std::endl;

  pthread_getschedparam(t1.native_handle(), &policy, &schParam);
  schParam.sched_priority = PRIO_MAX;
  /// For Windows, use THREAD_PRIORITY_HIGHEST for Priority with these apis:
  /// GetPriorityClass(), SetPriorityClass(), SetThreadPriority(), GetThreadPriority()
  if (!pthread_setschedparam(t1.native_handle(), SCHED_RR, &schParam)) {
    std::cout<<"t1 thread: Failed to pthread_setschedparam: "<<strerror(errno)<<std::endl;
  }

  pthread_getschedparam(t1.native_handle(), &policy, &schParam);
  std::cout << "t1 ThreadId: " << t1.get_id() << ", Priority: "
            << schParam.sched_priority <<", Policy: "<<policy<<std::endl;

  pthread_getschedparam(t2.native_handle(), &policy, &schParam);
  std::cout << "t2 ThreadId: " << t2.get_id() << ", Priority: "
            << schParam.sched_priority <<", Policy: "<<policy<<std::endl;

  t1.join();
  t2.join();

  /// Factory class test cases
  // register the various 3D renderers with the factory object
  Factory::V1::CFactoryMaker::RegisterRenderer("opengl", Factory::V1::COpenGLRenderer::Create);
  Factory::V1::CFactoryMaker::RegisterRenderer("directx", Factory::V1::CDirectXRenderer::Create);

  /// Create an OpenGL renderer
  Factory::V1::IFactoryInterface *pOpenGL = Factory::V1::CFactoryMaker::CreateRenderer("opengl");
  pOpenGL->Render();
  delete pOpenGL;
  pOpenGL = nullptr;

  /// Create a DirectX software renderer
  Factory::V1::IFactoryInterface *pDirectx = Factory::V1::CFactoryMaker::CreateRenderer("directx");
  pDirectx->Render();
  delete pDirectx;
  pDirectx = nullptr;

  /// Unregister the DirectX renderer
  Factory::V1::CFactoryMaker::UnregisterRenderer("directx");
  pDirectx = Factory::V1::CFactoryMaker::CreateRenderer("directx");
  if (!pDirectx) {
    cout << "DirectX renderer unregistered" << endl;
  }

  /// CObserverImpl class test cases
  /// create few observer classes
  Observer::V1::CObserverEventCollector observer1("observer1");
  Observer::V1::CObserverEventCollector observer2("observer2");
  Observer::V1::CObserverEventCollector observer3("observer3");

  /// Create Observer event Consumer class
  Observer::V1::CObserverConsumer obNotifier;

  ///Register each observer for CObserverConsumer events
  obNotifier.Subscribe(static_cast<int>(Observer::V1::CObserverConsumer::Messages::Event1), &observer1);
  obNotifier.Subscribe(static_cast<int>(Observer::V1::CObserverConsumer::Messages::Event1), &observer2);
  obNotifier.Subscribe(static_cast<int>(Observer::V1::CObserverConsumer::Messages::Event2), &observer2);
  obNotifier.Subscribe(static_cast<int>(Observer::V1::CObserverConsumer::Messages::Event3), &observer1);
  obNotifier.Subscribe(static_cast<int>(Observer::V1::CObserverConsumer::Messages::Event3), &observer3);

  ///Finally let obNotifier dispatches Event1 and Event3 messages for
  /// observer1 and observer3
  cout << "Notify Event1:" << endl;
  obNotifier.Notify(static_cast<int>(Observer::V1::CObserverConsumer::Messages::Event1));
  cout << "Notify Event3:" << endl;
  obNotifier.Notify(static_cast<int>(Observer::V1::CObserverConsumer::Messages::Event3));

  cout << "Exiting..." <<endl;
  return 0;
}
