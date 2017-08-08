/*
 * \file      CObserverConsumer.cpp
 * \author    https://github.com/infojg9
 * \brief     An example of minimal Observer concrete implementation from
 *            IObserverInterface interface
 * \copyright MIT/BSD Redistributable License
 */

#include "CObserverEventGenerator.h"

#include <map>
#include <vector>

namespace Observer {
namespace V1 {

class CObserverConsumer : public CObserverEventGenerator
{
public:
  enum Messages { Event1, Event2, Event3 };
};

} /// namespace V1
} /// namespace Observer
