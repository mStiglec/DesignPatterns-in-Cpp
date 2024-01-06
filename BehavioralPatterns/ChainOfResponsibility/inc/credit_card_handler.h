#ifndef CREDIT_CARD_HANDLER_H
#define CREDIT_CARD_HANDLER_H

#include "base_handler.h"

class CreditCardHandler : public BaseHandler {
  public:
    void process(User* user, UserDatabase* db) override;
};

#endif  // CREDIT_CARD_HANDLER_H