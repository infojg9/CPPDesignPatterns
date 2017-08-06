# MIT/BSD Redistributable License
# Author: https://github.com/infojg9

cmake_minimum_required(VERSION 3.8)
project(CDesignPatterns)

set(CMAKE_CXX_STANDARD 14)
list(APPEND CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -v -pipe -DGENERIC_DELEGATE_ON -Wall -Wextra -Wchkp -Wdouble-promotion -Wformat -Werror -pedantic -O0 -g3 -ggdb3 -ftest-coverage -fprofile-arcs")

# Add Pimple::V1 source
set(SOURCE_FILES PointerToImplementation.h PointerToImplementation.cpp main.cpp)
add_executable(CDesignPatterns ${SOURCE_FILES})
