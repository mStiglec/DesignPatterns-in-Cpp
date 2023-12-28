#ifndef USER_H
#define USER_H

#include <string>

#include "mediator.h"

class User {
  protected:
    std::string name;
    Mediator* mediator;

  public:
    User(std::string name, Mediator* mediator);
    void sendMessage(User* receiver, std::string message);
    void receiveMessage(std::string message);
    std::string getName();
};

#endif  // USER_H