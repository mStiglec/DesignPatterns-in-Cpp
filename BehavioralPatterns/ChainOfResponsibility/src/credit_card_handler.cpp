#include "../inc/credit_card_handler.h"

#include <iostream>
#include <vector>

void CreditCardHandler::process(User* user, UserDatabase* db)
{
  std::vector<User*> users = db->getUsers();
  for (User* validUser : users)
  {
    if (user->getCreditCardCVV() == validUser->getCreditCardCVV())
    {
      std::cout << "Successfull order" << std::endl;
      return;
    }
  }
  std::cout << "Card CVV is not valid" << std::endl;
}