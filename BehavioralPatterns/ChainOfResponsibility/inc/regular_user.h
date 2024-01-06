#ifndef REGULAR_USER_H
#define REGULAR_USER_H

class RegularUser : public User {
  public:
    RegularUser(std::string userName, std::string password, int creditCardCVV)
        : User(20, userName, password, creditCardCVV){};
};

#endif  // REGULAR_USER_H