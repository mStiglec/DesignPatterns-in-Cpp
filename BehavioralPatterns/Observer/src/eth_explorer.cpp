#include "../inc/eth_explorer.h"

#include "../rapidjson/document.h"

ETHExplorer::ETHExplorer(float ethValue, HttpHandler* httpHandler)
{
  this->ethValue = ethValue;
  this->httpHandler = httpHandler;
}

void ETHExplorer::addSubscriber(Subscriber& subscriber)
{
  subscribers.push_back(subscriber);
}

void ETHExplorer::removeSubscriber(Subscriber& subscriber)
{
  for (auto it = subscribers.begin(); it != subscribers.end(); it++)
  {
    if (it->getSubscriberId() == subscriber.getSubscriberId())
    {
      subscribers.erase(it);
      break;
    }
  }
}

void ETHExplorer::notify()
{
  for (auto it = subscribers.begin(); it != subscribers.end(); it++)
  {
    it->update(symbol, ethValue);
  }
}

void ETHExplorer::updateCryptoValue()
{
  float tempEthValue = ethValue;
  std::string json = httpHandler->sendGetRequest("https://blockchain.info/ticker");
  rapidjson::Document document;
  document.Parse<0>(json.c_str());
  this->ethValue = document["USD"]["last"].GetFloat();

  if (tempEthValue != ethValue)
  {
    std::cout << "Eth value changed!!" << std::endl;
    std::cout << "Old value: " << tempEthValue << std::endl;
    std::cout << "New value: " << ethValue << std::endl;
    notify();
  }
  else
  {
    std::cout << "Value did not change" << std::endl;
  }
}