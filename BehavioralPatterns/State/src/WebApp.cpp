#include "../inc/WebApp.h"

WebApp::WebApp(State* state) {
  changeState(state);
}

void WebApp::changeState(State* state) {
  state = state;
  state->setWebApp(this);
}

void WebApp::logIn() {
  state->logIn();
}

void WebApp::logOut() {
  state->logOut();
}

void WebApp::subscribeForProVersion() {
  state->subscribeForProVersion();
}

void WebApp::unsubscribeFromProVersion() {
  state->unsubscribeFromProVersion();
}

void WebApp::checkProducts() {
  state->checkProducts();
}

void WebApp::orderProducts() {
  state->orderProducts();
}