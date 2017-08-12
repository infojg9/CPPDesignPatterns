/*
 * \file      CObserverImpl.h
 * \author    https://github.com/infojg9
 * \brief     An example of minimal Observer Implementation
 * \copyright MIT/BSD Redistributable License
 */

#include "CObserverEventGenerator.h"

namespace Observer {
namespace V1 {

void CObserverEventGenerator::Subscribe(int message, IObserverInterface* observer)
{
  if (observer) {
    auto it = mObservers.find(message);
    if (it == mObservers.end()) {
      mObservers[message] = ObserverList();
    }
    mObservers[message].push_back(observer);
  }
}

void CObserverEventGenerator::Unsubscribe(int message, IObserverInterface *observer)
{
  auto it = mObservers.find(message);
  if (it != mObservers.end()) {
    ObserverList &list = mObservers[message];
    ObserverList::iterator li;
    for (li = list.begin(); li != list.end();) {
      if ((*li) == observer) {
        list.erase(li);
      }
      else {
        ++li;
      }
    }
  }
}

void CObserverEventGenerator::Notify(int message)
{
  auto it = mObservers.find(message);
  if (it != mObservers.end()) {
    ObserverList &list = mObservers[message];
    ObserverList::iterator li;
    for (li = list.begin(); li != list.end(); ++li) {
      (*li)->Update(message);
    }
  }
}

} /// namespace V1
} /// namespace Observer
