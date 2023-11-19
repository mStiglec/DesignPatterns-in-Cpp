#ifndef PRO_USER_LOGGED_STATE_H
#define PRO_USER_LOGGED_STATE_H

#include "State.h"

class ProUserLoggedState : public State {
 public:
  ProUserLoggedState();

  void checkProducts() override;
  void orderProducts() override;
  void logIn() override;
  void subscribeForProVersion() override;
  void unsubscribeFromProVersion() override;
  void logOut() override;
};

#endif  // PRO_USER_LOGGED_STATE_H