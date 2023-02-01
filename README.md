# MIT/BSD Redistributable License
# Author: https://github.com/infojg9
# CDesignPatterns
# Revision: 1.5


==========================

CMake configure logs:

/opt/clion-2017.1.3/bin/cmake/bin/cmake -DCMAKE_BUILD_TYPE=Debug -G "CodeBlocks - Unix Makefiles" /home/user/ClionProjects/CDesignPatterns
-- CDesignPatterns package version: 1.6
-- Boost version: 1.58.0
-- Found the following Boost libraries:
--   system
--   filesystem
-- CDesignPatterns build compiler: Unix Makefiles
-- CDesignPatterns build: ctest_test_args: PARALLEL_LEVEL;4 PARALLEL_LEVEL: 4
-- Configuring done
-- Generating done
-- Build files have been written to: /home/user/ClionProjects/CDesignPatterns/cmake-build-debug

[Finished]

====

CMake g++ compiler output:

'''

/opt/clion-2017.1.3/bin/cmake/bin/cmake --build /home/user/ClionProjects/CDesignPatterns/cmake-build-debug --target CDesignPatterns -- -j 2
[ 20%] Building CXX object CMakeFiles/CDesignPatterns.dir/Pimple/CPointerToImplementation.cpp.o
[ 20%] Building CXX object CMakeFiles/CDesignPatterns.dir/Singleton/CSingleton.cpp.o
Using built-in specs.

...
...
...

[100%] Built target CDesignPatterns



=========

Execution output:


/home/user/ClionProjects/CDesignPatterns/cmake-build-debug/CDesignPatterns
main ThreadId: 139871291172672, Priority: 0, Policy: 0
t1 ThreadId: 139871273899776, Priority: 0, Policy: 0
t2 ThreadId: 139871265507072, Priority: 0, Policy: 0
boost::typeindex Type: unsigned int
boost::typeindex param: unsigned int const&

Called by Thread Id: 139871273899776
boost::typeindex Type: unsigned int
boost::typeindex param: unsigned int const&
ThreadId: 139871265507072 executing at priority 20
ThreadId: 139871265507072 executing at priority 20

Called by Thread Id: 139871265507072
OpenGL Render
OpenGL Render
DirectX renderer unregistered
Notify Event1:
observer1: Received message: 0
observer2: Received message: 0
Notify Event3:
observer1: Received message: 2
observer3: Received message: 2

User2eventCollector(): received: Message 1: Request

User1eventCollector(): received: Message 1: Reply
Exiting...
PimpleTestObject1: consumed : 0.000832796 secs

Process finished with exit code 0

'''
