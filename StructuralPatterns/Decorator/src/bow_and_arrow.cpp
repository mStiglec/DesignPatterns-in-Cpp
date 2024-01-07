#include "../inc/bow_and_arrow.h"

#include <iostream>

BowAndArrow::BowAndArrow() : Weapon(10, 0, 0, 0) {}

void BowAndArrow::attack()
{
  std::cout << "Player attacked with normal bow and arrow: damage dealt: " << damage << std::endl;
}