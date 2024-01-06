#include "../inc/user.h"

User::User(int chartLimit, std::string userName, std::string password, int creditCardCVV)
{
  this->chartLimit = chartLimit;
  this->userName = userName;
  this->password = password;
  this->creditCardCVV = creditCardCVV;
};

int User::getChartLimit()
{
  return chartLimit;
}

std::string User::getUserName()
{
  return userName;
}

std::string User::getPassword()
{
  return password;
}

int User::getCreditCardCVV()
{
  return creditCardCVV;
}