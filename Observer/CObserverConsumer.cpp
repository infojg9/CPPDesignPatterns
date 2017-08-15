/*
 * \file      CObserverConsumer.cpp
 * \author    https://github.com/infojg9
 * \brief     An example of minimal Observer concrete implementation from
 *            IObserverInterface interface
 * \copyright MIT/BSD Redistributable License
 */

#include "CObserverEventGenerator.h"

namespace Observer {
namespace V1 {

class CObserverConsumer : public CObserverEventGenerator
{
public:
  enum class Messages { Event1, Event2, Event3 };
};

} /// namespace V1
} /// namespace Observer
