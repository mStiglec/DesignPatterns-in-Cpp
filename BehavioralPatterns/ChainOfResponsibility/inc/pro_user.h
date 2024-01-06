#ifndef PRO_USER_H
#define PRO_USER_H

class ProUser : public User {
  public:
    ProUser(std::string userName, std::string password, int creditCardCVV)
        : User(10, userName, password, creditCardCVV){};
};

#endif  // PRO_USER_H