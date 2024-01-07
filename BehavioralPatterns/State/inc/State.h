#ifndef STATE_H
#define STATE_H

#include <memory>

class WebApp;

class State {
  protected:
    WebApp* webApp;

  public:
    virtual ~State(){};

    void setWebApp(WebApp* webApp)
    {
      this->webApp = webApp;
    };

    virtual void checkProducts() = 0;
    virtual void orderProducts() = 0;
    virtual void logIn() = 0;
    virtual void subscribeForProVersion() = 0;
    virtual void unsubscribeFromProVersion() = 0;
    virtual void logOut() = 0;
};

#endif  // STATE_H