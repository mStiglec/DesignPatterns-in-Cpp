#include "../inc/gun.h"

#include <iostream>

Gun::Gun() : Weapon(25, 0, 0, 0) {}

void Gun::attack()
{
  std::cout << "Player attacked with normal gun: damage dealt: " << damage << std::endl;
}