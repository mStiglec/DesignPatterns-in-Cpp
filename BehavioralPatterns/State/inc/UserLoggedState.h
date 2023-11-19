#ifndef USER_LOGGED_STATE_H
#define USER_LOGGED_STATE_H

#include "State.h"

class UserLoggedState : public State {
 public:
  UserLoggedState();

  void checkProducts() override;
  void orderProducts() override;
  void logIn() override;
  void subscribeForProVersion() override;
  void unsubscribeFromProVersion() override;
  void logOut() override;
};

#endif  // USER_LOGGED_STATE_H