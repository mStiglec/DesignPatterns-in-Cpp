#include <chrono>
#include <iostream>
#include <string>
#include <thread>

#include "inc/btc_explorer.h"
#include "inc/crypto_explorer.h"
#include "inc/eth_explorer.h"
#include "inc/http_handler.h"
#include "inc/subscriber.h"
#include "rapidjson/document.h"

float getInitialBtcValue(HttpHandler* httpHandler)
{
  std::string json = httpHandler->sendGetRequest("https://blockchain.info/ticker");

  rapidjson::Document document;
  document.Parse<0>(json.c_str());

  return document["USD"]["last"].GetFloat();
}

// EthExplorer is not used because this API returns values only for BTC
// If API returned ETH values slight change should be done to
// EthExplorer::updateCryptoValue.

int main(void)
{
  HttpHandler* httpHandler = new HttpHandler();
  float initialBtcValue = getInitialBtcValue(httpHandler);
  CryptoExplorer* btcCryptoExplorer = new BTCExplorer(initialBtcValue, httpHandler);

  Subscriber firstSubscriber(1);
  Subscriber secondSubscriber(2);
  Subscriber thirdSubscriber(3);

  btcCryptoExplorer->addSubscriber(firstSubscriber);
  btcCryptoExplorer->addSubscriber(secondSubscriber);
  btcCryptoExplorer->addSubscriber(thirdSubscriber);

  std::chrono::seconds duration(60);
  while (true)
  {
    std::cout << "Waiting for a minute" << std::endl;
    std::this_thread::sleep_for(duration);
    btcCryptoExplorer->updateCryptoValue();
  }
}