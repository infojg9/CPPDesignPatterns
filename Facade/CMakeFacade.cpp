/*
 * \file      CMakeFacade.cpp
 * \author    https://github.com/infojg9
 * \brief     An implementation of CMakeFacade design pattern
 * \copyright MIT/BSD Redistributable License
 */

#include "CMakeFacade.h"
#include "CCollectionClasses.cpp"

namespace Facade {
namespace V1 {

class CMakeFacade::Impl
{
public:
  Impl() :
  m_event1(nullptr),
  m_event2(nullptr)
  {}

  ~Impl()
  {
    delete m_event1;
    delete m_event2;
    std::cout<<"Destroyed Original objects inside CMakeFacade"<<std::endl;
  }

  EventCategory1 *GetOriginal1()
  {
    if (! m_event1)
    {
      std::cout<<"Lazily allocating EventCategory1"<<std::endl;
      m_event1 = new EventCategory1;
    }
    return m_event1;
  }

  EventCategory2 *GetOriginal2()
  {
    if (! m_event2)
    {
      std::cout<<"Lazily allocating EventCategory2"<<std::endl;
      m_event2 = new EventCategory2;
    }
    return m_event2;
  }

private:
  EventCategory1 *m_event1;
  EventCategory2 *m_event2;
};

CMakeFacade::CMakeFacade()
: mImpl(new CMakeFacade::Impl)
{
}

CMakeFacade::~CMakeFacade()
{
  delete mImpl;
}

bool CMakeFacade::Action1()
{
  std::cout<< "Calling actions in EventCategory1 and EventCategory2"<<std::endl;
  int result = mImpl->GetOriginal1()->eventHandler();
  if (result < 10)
    return mImpl->GetOriginal2()->eventHandler(result);
  return false;
}

} /// namespace V1
} /// namespace Facade
