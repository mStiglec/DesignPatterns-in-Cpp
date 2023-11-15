#ifndef INITIAL_STATE_H
#define INITIAL_STATE_H

#include "State.h"

class InitialState : public State {
  public:
    InitialState();
    
  	void checkProducts() override;
  	void orderProducts() override;
    void logIn() override;
    void subscribeForProVersion() override;
    void unsubscribeFromProVersion() override;
    void logOut() override;
};

#endif // INITIAL_STATE_H