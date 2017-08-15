/*
 * \file      CObserverImpl.h
 * \author    https://github.com/infojg9
 * \brief     An example of minimal Observer decleration
 * \copyright MIT/BSD Redistributable License
 */

#pragma once

#include "IObserverInterface.h"

#include <map>
#include <vector>

namespace Observer {
namespace V1 {

/// \class CObserverTarget Observer implementation
class CObserverEventGenerator {
public:
  CObserverEventGenerator() = default;
  virtual ~CObserverEventGenerator() = default;

  /// Add a new observer to the list of observers.
  virtual void Subscribe(int message, IObserverInterface *observer);
  /// Remove an existing observer from the list of observers.
  virtual void Unsubscribe(int message, IObserverInterface *observer);
  /// Call the Update() method of all subscribed observers.
  virtual void Notify(int message);

private:
  typedef std::vector<IObserverInterface *> ObserverList;
  typedef std::map<int, ObserverList> ObserverMap;
  ObserverMap mObservers;
};

} /// namespace V1
} /// namespace Observer
