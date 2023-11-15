#include <iostream>

#include "../inc/ProUserLoggedState.h"
#include "../inc/UserLoggedState.h"
#include "../inc/InitialState.h"
#include "../inc/WebApp.h"

UserLoggedState::UserLoggedState(){};

void UserLoggedState::checkProducts() {
  std::cout << "Products are listed below" << std::endl;
}

void UserLoggedState::orderProducts() {
  std::cout << "You can not order products because you are not PRO user" << std::endl;
}

void UserLoggedState::logIn() {
  std::cout << "You are already logged in" << std::endl;
}

void UserLoggedState::subscribeForProVersion() {
  webApp->changeState(new ProUserLoggedState());
}

void UserLoggedState::unsubscribeFromProVersion() {
  std::cout << "You are not subscribed for PRO version" << std::endl;
}

void UserLoggedState::logOut() {
  webApp->changeState(new InitialState());
}