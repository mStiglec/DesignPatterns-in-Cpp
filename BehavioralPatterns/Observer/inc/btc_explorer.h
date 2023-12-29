#ifndef BTC_EXPLORER_H
#define BTC_EXPLORER_H

#include "crypto_explorer.h"
#include "http_handler.h"

// CONCRETE PUBLISHER

class BTCExplorer : public CryptoExplorer {
  private:
    float btcValue;
    std::string symbol = "BTC";
    HttpHandler* httpHandler;

  public:
    BTCExplorer(float btcValue, HttpHandler* HttpHandler);

    void addSubscriber(Subscriber& subscriber) override;
    void removeSubscriber(Subscriber& subscriber) override;
    void notify() override;
    void updateCryptoValue() override;
};

#endif  // BTC_EXPLORER