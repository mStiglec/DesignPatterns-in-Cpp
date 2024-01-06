#include "inc/base_handler.h"
#include "inc/chart_handler.h"
#include "inc/credit_card_handler.h"
#include "inc/login_handler.h"
#include "inc/pro_user.h"
#include "inc/regular_user.h"
#include "inc/user.h"
#include "inc/user_database.h"

int main(void)
{
  User* firstUser = new RegularUser("FirstRegularUser", "1234", 123);
  User* secondUser = new ProUser("ProUser", "5678", 456);
  User* thirdUser = new RegularUser("SecondRegularUser", "9012", 789);
  UserDatabase* db = new UserDatabase();
  db->addUser(firstUser);
  db->addUser(secondUser);
  db->addUser(thirdUser);

  BaseHandler* loginHandler = new LoginHandler();
  BaseHandler* chartHandler = new ChartHandler();
  BaseHandler* creditCardHandler = new CreditCardHandler();

  loginHandler->setNextHandler(chartHandler);
  chartHandler->setNextHandler(creditCardHandler);

  loginHandler->process(firstUser, db);
}