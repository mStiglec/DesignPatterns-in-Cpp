#include <iostream>
#include <string>
#include <vector>

#include "inc/mediator.h"
#include "inc/user.h"

int main(void)
{
  Mediator* mediator = new Mediator();
  User* firstUser = new User("First User", mediator);
  User* secondUser = new User("Second User", mediator);
  User* thirdUser = new User("Third User", mediator);

  mediator->addUser(firstUser);
  mediator->addUser(secondUser);
  mediator->addUser(thirdUser);

  firstUser->sendMessage(secondUser, "Sending message to second User");
  thirdUser->sendMessage(firstUser, "Sending message to second User");
  secondUser->sendMessage(thirdUser, "Sending message to second User");

  delete firstUser;
  delete secondUser;
  delete thirdUser;
  delete mediator;
}