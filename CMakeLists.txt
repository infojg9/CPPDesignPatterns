# \file      CMakeLists.txt
# \author    https://github.com/infojg9
# \brief     CMake cross platform friendly build script
# \copyright MIT/BSD Redistributable License

cmake_minimum_required(VERSION 3.8)
project(CDesignPatterns)

set(CMAKE_CXX_STANDARD 14)
list(APPEND CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -v -pipe -DGENERIC_DELEGATE_ON -Wall -Wextra -Wchkp -Wdouble-promotion -Wformat -Werror -pedantic -O0 -g3 -ggdb3 -ftest-coverage -fprofile-arcs -pthread")

set(SOURCE_FILES
    # Add Pimple::V1 source
    CPointerToImplementation.h
    CPointerToImplementation.cpp
    # Add CSingleton::V1 source
    CSingleton.h
    CSingleton.cpp
    main.cpp)

add_executable(CDesignPatterns ${SOURCE_FILES})
