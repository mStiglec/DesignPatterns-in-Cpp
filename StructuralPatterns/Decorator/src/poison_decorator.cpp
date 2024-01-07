#include "../inc/poison_decorator.h"

#include <iostream>

PoisonDecorator::PoisonDecorator(std::shared_ptr<Weapon> weapon) : WeaponDecorator(weapon)
{
  std::cout << "Your sword is now poisonous" << std::endl;
}

void PoisonDecorator::attack()
{
  weapon->attack();
  std::cout << "You attacked with poisonous sword" << std::endl;
}
