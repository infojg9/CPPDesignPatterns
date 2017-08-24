/*
 * \file      CCollectionClasses.cpp
 * \author    https://github.com/infojg9
 * \brief     Collection of classes to be abstracted by Facade implementations
 * \copyright MIT/BSD Redistributable License
 */

#include <iostream>

namespace Facade {
namespace V1 {

/// \class EventCategory1 class for event processing from category 1
class EventCategory1
{
public:
  int eventHandler()
  {
    std::cout<<"EventCategory1::DoOperation1"<<std::endl;
    return 42;
  }
};

/// \class EventCategory2 class for event processing from category 2
class EventCategory2
{
public:
  bool eventHandler(int data)
  {
    std::cout<<"EventCategory2::DoOperation2 with data: "<<data<<std::endl;
    return true;
  }
};

} /// namespace V1
} /// namespace Facade
