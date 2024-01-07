#ifndef FIRE_DECORATOR_H
#define FIRE_DECORATOR_H

#include "weapon_decorator.h"

class FireDecorator : public WeaponDecorator {
  public:
    FireDecorator(std::shared_ptr<Weapon> weapon);
    void attack() override;
};

#endif  // FIRE_DECORATOR_H
