#include "../inc/ProUserLoggedState.h"

#include <iostream>

#include "../inc/InitialState.h"
#include "../inc/UserLoggedState.h"
#include "../inc/WebApp.h"

ProUserLoggedState::ProUserLoggedState(){};

void ProUserLoggedState::checkProducts()
{
  std::cout << "Products are listed below" << std::endl;
}

void ProUserLoggedState::orderProducts()
{
  std::cout << "Order completed successfully" << std::endl;
}

void ProUserLoggedState::logIn()
{
  std::cout << "You are already logged in" << std::endl;
}

void ProUserLoggedState::subscribeForProVersion()
{
  std::cout << "You are already subscribed" << std::endl;
}

void ProUserLoggedState::unsubscribeFromProVersion()
{
  std::shared_ptr<State> userLoggedState = std::make_shared<UserLoggedState>();
  webApp->changeState(userLoggedState);
}

void ProUserLoggedState::logOut()
{
  std::shared_ptr<State> initialState = std::make_shared<InitialState>();
  webApp->changeState(initialState);
}