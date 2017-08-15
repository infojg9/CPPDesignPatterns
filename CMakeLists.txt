# \file      CMakeLists.txt
# \author    https://github.com/infojg9
# \brief     CMake cross platform friendly build script
# \copyright MIT/BSD Redistributable License

# Minimum 3.1 since using Threads::Threads imported target
cmake_minimum_required(VERSION 3.1)

project(CDesignPatterns)

string(TIMESTAMP TS "%Y-%m-%d %H:%M:%S")

file (STRINGS "${PROJECT_SOURCE_DIR}/VERSION" PACKAGE_VERSION)
message(STATUS "CDesignPatterns package version: ${PACKAGE_VERSION}")

set(CMAKE_CXX_STANDARD 14)

# Select pthread over other options
set(CMAKE_THREAD_PREFER_PTHREAD TRUE)
set(THREADS_PREFER_PTHREAD_FLAG TRUE)

# Enabled Threading support
find_package(Threads REQUIRED)

# Enabled Boost build support
set(Boost_USE_STATIC_LIBS        ON)
set(Boost_USE_MULTITHREADED      ON)
set(Boost_USE_STATIC_RUNTIME    OFF)
#Bind to minimum version: find_package(Boost 1.58.0 COMPONENTS date_time filesystem system)
find_package(Boost COMPONENTS system filesystem REQUIRED)

if(NOT MSVC_IDE)
  if(NOT CMAKE_BUILD_TYPE)
    set(CMAKE_BUILD_TYPE RelWithDebInfo CACHE STRING
        "Choose the type of build, options are: None Debug Release" FORCE)
  endif()
endif()

if (CMAKE_BUILD_TYPE STREQUAL "")
  set( CMAKE_BUILD_TYPE "RelWithDebInfo" )
endif()

macro(force_static_build)
  if(MSVC)
    message(STATUS "CDesignPatterns build compiler: MSVC")
    set(MSVC_RUNTIME "static")
    set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS}" "/MP")
    set(variables
        CMAKE_C_FLAGS_DEBUG
        CMAKE_C_FLAGS_MINSIZEREL
        CMAKE_C_FLAGS_RELEASE
        CMAKE_C_FLAGS_RELWITHDEBINFO
        CMAKE_CXX_FLAGS_DEBUG
        CMAKE_CXX_FLAGS_MINSIZEREL
        CMAKE_CXX_FLAGS_RELEASE
        CMAKE_CXX_FLAGS_RELWITHDEBINFO
        )
    foreach(variable ${variables})
      if(${variable} MATCHES "/MD")
        string(REGEX REPLACE "/MD" "/MT" ${variable} "${${variable}}")
      endif()
    endforeach()
  elseif(${CMAKE_GENERATOR} MATCHES "Unix Makefiles")
    message(STATUS "CDesignPatterns build compiler: Unix Makefiles")
    #When custom build script required: set(CMAKE_MAKE_PROGRAM "${PROJECT_BINARY_DIR}/Multibuild.sh")

    function(CountCpuCore N)
      if(NOT N EQUAL 0)
        set(CTEST_BUILD_FLAGS -j${N})
        set(ctest_test_args ${ctest_test_args} PARALLEL_LEVEL ${N})
        message(STATUS "CDesignPatterns build: ctest_test_args: ${ctest_test_args} PARALLEL_LEVEL: ${N}")
      endif()
    endfunction(CountCpuCore)

    SET(CpuCore 4)
    CountCpuCore(${CpuCore})

  else()
    message(STATUS "CDesignPatterns build compiler: ${CMAKE_GENERATOR}")
  endif()
endmacro()
force_static_build()

set(SOURCE_FILES
    # Added Pimple::V1 source
    Pimple/CPointerToImplementation.h
    Pimple/CPointerToImplementation.cpp
    # Added CSingleton::V1 source
    Singleton/CSingleton.h
    Singleton/CSingleton.cpp
    # Added Factory::V1 source
    Factory/IFactoryInterface.h
    Factory/CFactoryMaker.h
    Factory/CFactoryMaker.cpp
    Factory/CFactoryMakerConsumer.cpp
    # Added Observer::V1 source
    Observer/IObserverInterface.h
    Observer/CObserverEventGenerator.h
    Observer/CObserverEventGenerator.cpp
    Observer/CObserverConsumer.cpp
    Observer/CObserverEventCollector.cpp
    # Added SignalSlot::V1 source
    SignalSlot/CSignalSlotType1.h
    SignalSlot/CSignalSlotImpl.cpp
    # Test code: Gtest build support would be ideal
    main.cpp
    )

add_executable(CDesignPatterns ${SOURCE_FILES})

list(APPEND CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -v -pipe -Wchkp -Wdouble-promotion -Wformat -ftest-coverage -fprofile-arcs -funroll-loops")

target_compile_options(CDesignPatterns PUBLIC -Wall -Wextra -Werror -pedantic -O0 -g3 -ggdb3)

# Alternative: Append -DGENERIC_DELEGATE_ON with CMAKE_CXX_FLAGS
target_compile_definitions(CDesignPatterns PUBLIC GENERIC_DELEGATE_ON)

if(Boost_FOUND)
  include_directories(${Boost_INCLUDE_DIRS})
  target_link_libraries(CDesignPatterns PUBLIC ${Boost_LIBRARIES} Threads::Threads)
endif()
# Alternatively: target_link_libraries(CDesignPatterns ${CMAKE_THREAD_LIBS_INIT} )

target_compile_features(CDesignPatterns PUBLIC cxx_auto_type cxx_noexcept cxx_nullptr cxx_range_for)
# Support for older compilers: set_target_properties(CDesignPatterns PROPERTIES CXX_STANDARD 14)
