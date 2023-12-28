#ifndef MEDIATOR_H
#define MEDIATOR_H

#include <string>
#include <vector>

class User;

class Mediator {
  private:
    std::vector<User*> users;

  public:
    void addUser(User* user);
    void notify(User* receiver, std::string message);
};

#endif  // MEDIATOR_H