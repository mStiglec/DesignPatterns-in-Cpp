#ifndef ETH_EXPLORER_H
#define ETH_EXPLORER_H

#include "crypto_explorer.h"
#include "http_handler.h"

// CONCRETE PUBLISHER

class ETHExplorer : public CryptoExplorer {
  private:
    float ethValue;
    std::string symbol = "ETH";
    HttpHandler* httpHandler;

  public:
    ETHExplorer(float ethValue, HttpHandler* httpHandler);

    void addSubscriber(Subscriber& subscriber) override;
    void removeSubscriber(Subscriber& subscriber) override;
    void notify() override;
    void updateCryptoValue() override;
};

#endif  // ETH_EXPLORER