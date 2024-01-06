#ifndef LOGIN_HANDLER_H
#define LOGIN_HANDLER_H

#include "base_handler.h"

class LoginHandler : public BaseHandler {
  public:
    void process(User* user, UserDatabase* db) override;
};

#endif  // LOGIN_HANDLER_H