/*
 * \file      IFactoryInterface.h
 * \author    https://github.com/infojg9
 * \brief     An example of Factory design pattern public Interface
 * \copyright MIT/BSD Redistributable License
 */

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

#include <iostream>

namespace Factory {
namespace V1 {


/// \interface IFactoryInterface Abstract interface example for any 3D renderer
class IFactoryInterface
{
public:
  IFactoryInterface() = default;
  virtual ~IFactoryInterface() = default;
  virtual bool LoadScene(const std::string &filename) = 0;
  virtual void SetViewportSize(int w, int h) = 0;
  virtual void SetCameraPos(double x, double y, double z) = 0;
  virtual void SetLookAt(double x, double y, double z) = 0;
  virtual void Render() = 0;
};

} /// namespace V1
} /// namespace Factory
