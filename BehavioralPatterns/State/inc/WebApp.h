#ifndef WEB_APP_H
#define WEB_APP_H

#include <memory>

#include "State.h"

// CONTEXT
class WebApp {
 private:
  std::shared_ptr<State> state;

 public:
  WebApp(std::shared_ptr<State> state);

  void changeState(std::shared_ptr<State> state);

  void checkProducts();
  void orderProducts();
  void logIn();
  void logOut();
  void subscribeForProVersion();
  void unsubscribeFromProVersion();
};

#endif  // WEB_APP_H