#ifndef USER_DATABASE_H
#define USER_DATABASE_H

#include <vector>

#include "user.h"

class UserDatabase {
  private:
    std::vector<User*> users;

  public:
    std::vector<User*> getUsers()
    {
      return users;
    }

    void addUser(User* user)
    {
      users.push_back(user);
    }
};

#endif  // USER_DATABASE_H