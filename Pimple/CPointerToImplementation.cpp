/*
 * \file      CPointerToImplementation.cpp
 * \author    https://github.com/infojg9
 * \brief     An example of the PIMPL Design / Pointer to Implementation.
 * \copyright MIT/BSD Redistributable License
 */

#include "CPointerToImplementation.h"

#include <iostream>

#ifdef _WIN32
#include <windows.h>
#else
#include <sys/time.h>
#endif

namespace Pimple {
namespace V1 {

/// \class Private Impl class decoupled implementation, kind of Bridge pattern
class CPointerToImplementation::Impl
{
public:
  Impl() = default;
  virtual ~Impl();

  Impl(Impl const&) = default;
  Impl& operator=(Impl const&) = default;
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

CPointerToImplementation::CPointerToImplementation(std::string const& name)
  : m_pImpl(std::make_unique<CPointerToImplementation::Impl>())
{
  m_pImpl->mName = name;
#ifdef _WIN32
  m_pImpl->mStartTime = GetTickCount();
#else
  gettimeofday(&m_pImpl->mStartTime, nullptr);
#endif
}

CPointerToImplementation::~CPointerToImplementation()
{
  std::cout << m_pImpl->mName << ": consumed : " << m_pImpl->GetElapsed()
            << " secs" << std::endl;
  m_pImpl.reset();
  m_pImpl = nullptr;
}

CPointerToImplementation::ImplPtr&& CPointerToImplementation::getImplPtr() {
  return std::move(m_pImpl);
}

/// Allow explicit deep copy in copy constructor from rImpl object reference
CPointerToImplementation::CPointerToImplementation(
CPointerToImplementation const& rImpl)
: m_pImpl(std::make_unique<Impl>(*rImpl.m_pImpl))
{}

/// Allow explicit deep copy in copy assignment operator from rImpl object reference
CPointerToImplementation&
CPointerToImplementation::operator=(CPointerToImplementation const& rImpl) {
  *m_pImpl = *rImpl.m_pImpl;
  return *this;
}

double CPointerToImplementation::Impl::GetElapsed() const
{
#ifdef _WIN32
  return (GetTickCount() - mStartTime) / 1e3;
#else
  struct timeval end_time;
  gettimeofday(&end_time, nullptr);
  double t1 = mStartTime.tv_usec / 1e6 + mStartTime.tv_sec;
  double t2 = end_time.tv_usec / 1e6 + end_time.tv_sec;
  return t2 - t1;
#endif
}

CPointerToImplementation::Impl::~Impl() {
}

} /// namespace V1
} /// namespace Pimple
