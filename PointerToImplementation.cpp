/*
 * MIT/BSD Redistributable License
 * Author: https://github.com/infojg9
 */

#include "PointerToImplementation.h"

#include <iostream>

#ifdef _WIN32
#include <windows.h>
#else
#include <sys/time.h>
#endif

namespace Pimple {
namespace V1 {

class PointerToImplementation::Impl
{
public:
  Impl() = default;
  virtual ~Impl();

  Impl(Impl const&) = delete;
  Impl& operator=(Impl const&) = delete;
  Impl(Impl&&) = default;
  Impl& operator=(Impl&&) = default;

double GetElapsed() const;

  std::string mName;
#ifdef _WIN32
  DWORD mStartTime;
#else
  struct timeval mStartTime;
#endif
};

PointerToImplementation::PointerToImplementation(std::string const& name)
  : m_pImpl(std::make_unique<PointerToImplementation::Impl>())
{
  m_pImpl->mName = name;
#ifdef _WIN32
  m_pImpl->mStartTime = GetTickCount();
#else
  gettimeofday(&m_pImpl->mStartTime, NULL);
#endif
}

PointerToImplementation::~PointerToImplementation()
{
  std::cout << m_pImpl->mName << ": consumed : " << m_pImpl->GetElapsed()
            << " secs" << std::endl;
  m_pImpl.reset();
  m_pImpl = nullptr;
}

PointerToImplementation::ImplPtr&& PointerToImplementation::getImplPtr() {
  return std::move(m_pImpl);
}

double PointerToImplementation::Impl::GetElapsed() const
{
#ifdef _WIN32
  return (GetTickCount() - mStartTime) / 1e3;
#else
  struct timeval end_time;
  gettimeofday(&end_time, NULL);
  double t1 = mStartTime.tv_usec / 1e6 + mStartTime.tv_sec;
  double t2 = end_time.tv_usec / 1e6 + end_time.tv_sec;
  return t2 - t1;
#endif
}

PointerToImplementation::Impl::~Impl() {
}

} /// namespace V1
} /// namespace Pimple
