#include "../inc/mediator.h"

#include <iostream>

#include "../inc/user.h"

void Mediator::addUser(User* user)
{
  users.push_back(user);
};

void Mediator::notify(User* receiver, std::string message)
{
  for (User* user : users)
  {
    if (receiver->getName() == user->getName())
    {
      user->receiveMessage(message);
      return;
    }
  }
  std::cout << "User not found" << std::endl;
};