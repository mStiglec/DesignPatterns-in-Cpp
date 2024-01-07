#include "../inc/UserLoggedState.h"

#include <iostream>

#include "../inc/InitialState.h"
#include "../inc/ProUserLoggedState.h"
#include "../inc/WebApp.h"

UserLoggedState::UserLoggedState(){};

void UserLoggedState::checkProducts()
{
  std::cout << "Products are listed below" << std::endl;
}

void UserLoggedState::orderProducts()
{
  std::cout << "You can not order products because you are not PRO user" << std::endl;
}

void UserLoggedState::logIn()
{
  std::cout << "You are already logged in" << std::endl;
}

void UserLoggedState::subscribeForProVersion()
{
  std::shared_ptr<State> proUserLoggedState = std::make_shared<ProUserLoggedState>();
  webApp->changeState(proUserLoggedState);
}

void UserLoggedState::unsubscribeFromProVersion()
{
  std::cout << "You are not subscribed for PRO version" << std::endl;
}

void UserLoggedState::logOut()
{
  std::shared_ptr<State> initialState = std::make_shared<InitialState>();
  webApp->changeState(initialState);
}