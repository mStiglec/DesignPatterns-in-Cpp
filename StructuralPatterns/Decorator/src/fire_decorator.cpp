#include "../inc/fire_decorator.h"

#include <iostream>

FireDecorator::FireDecorator(std::shared_ptr<Weapon> weapon) : WeaponDecorator(weapon)
{
  std::cout << "Your sword is now on fire" << std::endl;
}

void FireDecorator::attack()
{
  weapon->attack();
  std::cout << "You attacked with fire sword" << std::endl;
}
