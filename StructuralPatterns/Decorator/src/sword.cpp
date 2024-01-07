#include "../inc/sword.h"

#include <iostream>

Sword::Sword() : Weapon(15, 0, 0, 0) {}

void Sword::attack()
{
  std::cout << "Player attacked with normal sword: damage dealt: " << damage << std::endl;
}