#include "../inc/login_handler.h"

#include <iostream>
#include <vector>

void LoginHandler::process(User* user, UserDatabase* db)
{
  std::vector<User*> users = db->getUsers();
  for (User* validUser : users)
  {
    if (user->getUserName() == validUser->getUserName() &&
        user->getPassword() == validUser->getPassword())
    {
      std::cout << "User logged in" << std::endl;
      nextHandler->process(user, db);
      return;
    }
  }
  std::cout << "Wrong credentials" << std::endl;
}