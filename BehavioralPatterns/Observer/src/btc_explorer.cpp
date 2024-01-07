#include "../inc/btc_explorer.h"

#include "../../../rapidjson/include/rapidjson/document.h"

BTCExplorer::BTCExplorer(float btcValue, HttpHandler* httpHandler)
{
  this->btcValue = btcValue;
  this->httpHandler = httpHandler;
}

void BTCExplorer::addSubscriber(Subscriber& subscriber)
{
  subscribers.push_back(subscriber);
}

void BTCExplorer::removeSubscriber(Subscriber& subscriber)
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

void BTCExplorer::notify()
{
  for (auto it = subscribers.begin(); it != subscribers.end(); it++)
  {
    it->update(symbol, btcValue);
  }
}

void BTCExplorer::updateCryptoValue()
{
  float tempBtcValue = btcValue;
  std::string json = httpHandler->sendGetRequest("https://blockchain.info/ticker");
  rapidjson::Document document;
  document.Parse<0>(json.c_str());
  this->btcValue = document["USD"]["last"].GetFloat();

  if (tempBtcValue != btcValue)
  {
    std::cout << "BTC value changed!!" << std::endl;
    std::cout << "Old value: " << tempBtcValue << std::endl;
    std::cout << "New value: " << btcValue << std::endl;
    notify();
  }
  else
  {
    std::cout << "Value did not change" << std::endl;
  }
}