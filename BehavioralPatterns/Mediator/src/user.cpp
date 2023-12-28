#include "../inc/user.h"

#include <iostream>

#include "../inc/mediator.h"

User::User(std::string name, Mediator* mediator)
{
  this->name = name;
  this->mediator = mediator;
};

void User::sendMessage(User* receiver, std::string message)
{
  mediator->notify(receiver, message);
};

void User::receiveMessage(std::string message)
{
  std::cout << name << " Received: " << std::endl;
  std::cout << "Message: " << message << std::endl;
};

std::string User::getName()
{
  return name;
};