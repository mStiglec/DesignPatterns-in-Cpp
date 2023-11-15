#include <iostream>

#include "../inc/ProUserLoggedState.h"
#include "../inc/UserLoggedState.h"
#include "../inc/InitialState.h"
#include "../inc/WebApp.h"

ProUserLoggedState::ProUserLoggedState(){};

void ProUserLoggedState::checkProducts() {
  std::cout << "Products are listed below" << std::endl;
}

void ProUserLoggedState::orderProducts() {
  std::cout << "Order completed successfully" << std::endl;
}

void ProUserLoggedState::logIn() {
  std::cout << "You are already logged in" << std::endl;
}

void ProUserLoggedState::subscribeForProVersion() {
  std::cout << "You are already subscribed" << std::endl;
}

void ProUserLoggedState::unsubscribeFromProVersion() {
  webApp->changeState(new UserLoggedState());
}

void ProUserLoggedState::logOut() {
  webApp->changeState(new InitialState());
}