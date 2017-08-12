/*
 * \file      IObserverInterface.h
 * \author    https://github.com/infojg9
 * \brief     An example of minimal Observer Interface
 * \copyright MIT/BSD Redistributable License
 */

#include <iostream>

#pragma once

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

namespace Observer {
namespace V1 {

/// \interface IObserverInterface An abstract interface for an observer class.
class IObserverInterface
{
public:
  IObserverInterface() = default;
  virtual ~IObserverInterface() = default;
  virtual void Update(int message) = 0;
};

} /// namespace V1
} /// namespace Observer
