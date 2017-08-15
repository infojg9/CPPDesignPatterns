/*
 * \file      CFactoryMaker.cpp
 * \author    https://github.com/infojg9
 * \brief     An example of Factory design pattern implementation
 * \copyright MIT/BSD Redistributable License
 */

#include "CFactoryMaker.h"

namespace Factory {
namespace V1 {

// instantiate the static variable in CFactoryMaker
CFactoryMaker::CallbackMap CFactoryMaker::mRenderers;

void CFactoryMaker::RegisterRenderer(const std::string &type,
                                       fpCallbackPtr cb)
{
  mRenderers[type] = cb;
}

void CFactoryMaker::UnregisterRenderer(const std::string &type)
{
  mRenderers.erase(type);
}

IFactoryInterface *CFactoryMaker::CreateRenderer(const std::string &type)
{
  auto it = mRenderers.find(type);
  if (it != mRenderers.end()) {
    // call the creation callback to construct this derived type
    return (it->second)();
  }

  return nullptr;
}

} /// namespace V1
} /// namespace Factory
