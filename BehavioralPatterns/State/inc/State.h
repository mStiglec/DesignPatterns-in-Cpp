#ifndef STATE_H
#define STATE_H

class WebApp;

class State {
  protected:
  	WebApp* webApp;

  public:
    virtual ~State() {};

    void setWebApp(WebApp* _webApp) {
      webApp = _webApp;
    };

  	virtual void checkProducts() = 0;
  	virtual void orderProducts() = 0;
  	virtual void logIn() = 0;
  	virtual void subscribeForProVersion() = 0;
  	virtual void unsubscribeFromProVersion() = 0;
  	virtual void logOut() = 0;
};

#endif // STATE_H