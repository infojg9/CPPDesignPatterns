/*
 * \file      CObserverEventCollector.cpp
 * \author    https://github.com/infojg9
 * \brief     An example of minimal Observer concrete implementation from
 *            IObserverInterface interface
 * \copyright MIT/BSD Redistributable License
 */

#include "IObserverInterface.h"

namespace Observer {
namespace V1 {

/// An observer class that wishes to receive a notification
class CObserverEventCollector : public IObserverInterface
{
public:
  CObserverEventCollector(std::string const& str)
  : mName(str)
  {}

  void Update(int message) final {
    /// C++14 required: generic lambda
    auto genericLambdaFn = [this](const auto& message) {
      std::cout<<mName<<": Received message: "<<message<<std::endl;
    };
    genericLambdaFn(message);
  }

private:
  std::string mName;
};

} /// namespace V1
} /// namespace Observer
