#ifndef CRYPTO_EXPLORER_H
#define CRYPTO_EXPLORER_H

#include <vector>

#include "subscriber.h"

// PUBLISHER

class CryptoExplorer {
  protected:
    std::vector<Subscriber> subscribers;

  public:
    virtual void addSubscriber(Subscriber& subscriber) = 0;
    virtual void removeSubscriber(Subscriber& subscriber) = 0;
    virtual void notify() = 0;
    virtual void updateCryptoValue() = 0;
};

#endif  // CRYPTO_EXPLORER_H