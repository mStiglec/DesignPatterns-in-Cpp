#include <iostream>

#include "../inc/InitialState.h"
#include "../inc/UserLoggedState.h"
#include "../inc/WebApp.h"

InitialState::InitialState(){};

void InitialState::checkProducts() {
  std::cout << "You can not see products because you do not have account" << std::endl;
}

void InitialState::orderProducts() {
  std::cout << "You can not order products because you are not PRO user" << std::endl;
}

void InitialState::logIn() {
  webApp->changeState(new UserLoggedState());
}

void InitialState::subscribeForProVersion() {
  std::cout << "You need account before subscribing to PRO version" << std::endl;
}

void InitialState::unsubscribeFromProVersion() {
  std::cout << "You are not subscribed for PRO version" << std::endl;
}

void InitialState::logOut() {
  std::cout << "You are not logged in" << std::endl;
}