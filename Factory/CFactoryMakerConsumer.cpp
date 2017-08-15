/*
 * \file      CFactoryMakerConsumer.cpp
 * \author    https://github.com/infojg9
 * \brief     An example of Factory design pattern consumer/implementation
 *            for inherited final derived leaf class
 * \copyright MIT/BSD Redistributable License
 */

#include "IFactoryInterface.h"

namespace Factory {
namespace V1 {

/// An OpenGL-based 3D renderer
class COpenGLRenderer : public IFactoryInterface
{
public:

  static IFactoryInterface* Create() {
    return new COpenGLRenderer;
  }

  bool LoadScene(const std::string &filename) final {
    std::cout<<filename<<std::endl;
    return true;
  }

  void SetViewportSize(int w, int h) final {
    std::cout<<w<<h<<std::endl;
  }

  void SetCameraPos(double x, double y, double z) final {
    std::cout<<x<<y<<z<<std::endl;
  }

  void SetLookAt(double x, double y, double z) final {
    std::cout<<x<<y<<z<<std::endl;
  }

  void Render() final {
    std::cout << "OpenGL Render" << std::endl;
  }
};

/// A DirectX-based 3D renderer
class CDirectXRenderer : public IFactoryInterface
{
public:

  static IFactoryInterface* Create() {
    return new CDirectXRenderer;
  }

  bool LoadScene(const std::string &filename) final {
    std::cout<<filename<<std::endl;
    return true;
  }

  void SetViewportSize(int w, int h) final {
    std::cout<<w<<h<<std::endl;
  }

  void SetCameraPos(double x, double y, double z) final {
    std::cout<<x<<y<<z<<std::endl;
  }

  void SetLookAt(double x, double y, double z) final {
    std::cout<<x<<y<<z<<std::endl;
  }

  void Render() final {
    std::cout << "OpenGL Render" << std::endl;
  }
};

} /// namespace V1
} /// namespace Factory
