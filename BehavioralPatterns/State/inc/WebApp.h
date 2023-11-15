#ifndef WEB_APP_H
#define WEB_APP_H

#include "State.h"

class WebApp {
  private:
  	State* state;

  public:
    WebApp(State* state);

    void changeState(State* state);

    void checkProducts();
    void orderProducts();
    void logIn();
    void logOut();
    void subscribeForProVersion();
    void unsubscribeFromProVersion();
};

#endif // WEB_APP_H