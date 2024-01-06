#ifndef USER_H
#define USER_H

#include <string>

class User {
  protected:
    int chartLimit;
    std::string userName;
    std::string password;
    int creditCardCVV;

  public:
    User(int chartLimit, std::string userName, std::string password, int creditCardCVV);

    int getChartLimit();
    std::string getUserName();
    std::string getPassword();
    int getCreditCardCVV();
};

#endif  // USER_H