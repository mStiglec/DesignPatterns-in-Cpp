#include <iostream>
#include <memory>

#include "inc/InitialState.h"
#include "inc/WebApp.h"

int main(void)
{
  std::shared_ptr<State> initialState = std::make_shared<InitialState>();
  std::shared_ptr<WebApp> webApp = std::make_shared<WebApp>(initialState);

  std::cout << "\n----------- STATUS BEFORE LOG IN ----------- \n";
  webApp->checkProducts();
  webApp->orderProducts();
  webApp->subscribeForProVersion();

  webApp->logIn();

  std::cout << "\n ----------- STATUS AFTER LOG IN ----------- \n";
  webApp->checkProducts();
  webApp->orderProducts();
  webApp->subscribeForProVersion();

  std::cout << "\n ----------- STATUS AFTER UPGRADE TO PRO ----------- \n";
  webApp->checkProducts();
  webApp->orderProducts();
  webApp->subscribeForProVersion();
}