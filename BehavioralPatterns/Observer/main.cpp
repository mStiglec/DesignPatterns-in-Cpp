#include <chrono>
#include <iostream>
#include <signal.h>
#include <string>
#include <thread>

#include "../../rapidjson/include/rapidjson/document.h"
#include "inc/btc_explorer.h"
#include "inc/crypto_explorer.h"
#include "inc/eth_explorer.h"
#include "inc/http_handler.h"
#include "inc/subscriber.h"

static unsigned int sigint_flag = 1;

float getInitialBtcValue(HttpHandler* httpHandler)
{
  std::string json = httpHandler->sendGetRequest("https://blockchain.info/ticker");

  rapidjson::Document document;
  document.Parse<0>(json.c_str());

  return document["USD"]["last"].GetFloat();
}

void sigint_handler(int signal)
{
  sigint_flag = 0;
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

  struct sigaction sigIntHandler;

  sigIntHandler.sa_handler = sigint_handler;
  sigemptyset(&sigIntHandler.sa_mask);
  sigIntHandler.sa_flags = 0;

  sigaction(SIGINT, &sigIntHandler, NULL);

  int sleepDurationInSec = 5;
  std::chrono::seconds duration(sleepDurationInSec);
  while (sigint_flag)
  {
    std::cout << "Waiting ..." << std::endl;
    std::this_thread::sleep_for(duration);
    btcCryptoExplorer->updateCryptoValue();
    std::cout << std::endl;
  }

  delete httpHandler;
  delete btcCryptoExplorer;
}