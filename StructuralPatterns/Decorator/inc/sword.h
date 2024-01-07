#ifndef SWORD_H
#define SWORD_H

#include "weapon.h"

class Sword : public Weapon {
  public:
    Sword();
    void attack() override;
};

#endif  // SWORD_H
