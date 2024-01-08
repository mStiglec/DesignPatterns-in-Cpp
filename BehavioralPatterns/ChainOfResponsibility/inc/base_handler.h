#ifndef BASE_HANDLER_H
#define BASE_HANDLER_H

#include "user.h"
#include "user_database.h"

class BaseHandler {
  protected:
    BaseHandler* nextHandler;

  public:
    void setNextHandler(BaseHandler* handler)
    {
      this->nextHandler = handler;
    }

    virtual ~BaseHandler(){};

    virtual void process(User* user, UserDatabase* db) = 0;
};

#endif  // BASE_HANDLER_H