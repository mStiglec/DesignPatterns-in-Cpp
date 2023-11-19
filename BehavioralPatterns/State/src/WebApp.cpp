#include "../inc/WebApp.h"

WebApp::WebApp(std::shared_ptr<State> state)
{
  changeState(state);
}

void WebApp::changeState(std::shared_ptr<State> state)
{
  this->state = state;
  this->state->setWebApp(this);
}

void WebApp::logIn()
{
  state->logIn();
}

void WebApp::logOut()
{
  state->logOut();
}

void WebApp::subscribeForProVersion()
{
  state->subscribeForProVersion();
}

void WebApp::unsubscribeFromProVersion()
{
  state->unsubscribeFromProVersion();
}

void WebApp::checkProducts()
{
  state->checkProducts();
}

void WebApp::orderProducts()
{
  state->orderProducts();
}