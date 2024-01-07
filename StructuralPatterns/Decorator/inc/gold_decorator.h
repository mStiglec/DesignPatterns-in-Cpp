#ifndef GOLD_DECORATOR_H
#define GOLD_DECORATOR_H

#include <memory>

#include "weapon_decorator.h"

class GoldDecorator : public WeaponDecorator {
  public:
    GoldDecorator(std::shared_ptr<Weapon> weapon);
    void attack() override;
};

#endif  // GOLD_DECORATOR_H
