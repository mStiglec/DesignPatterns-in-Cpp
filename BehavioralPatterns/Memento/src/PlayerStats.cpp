#include "../inc/PlayerStats.h"

#include <iostream>

PlayerStats::PlayerStats(){};

PlayerStats::PlayerStats(std::string name, int health, unsigned int armor, unsigned int attack)
{
  this->name = name;
  this->health = health;
  this->armor = armor;
  this->attack = attack;
};

void PlayerStats::displayPlayerStats()
{
  std::cout << "Health: " << health << std::endl;
  std::cout << "Armor: " << armor << std::endl;
  std::cout << "Attack: " << attack << std::endl;
  std::cout << std::endl;
}

void PlayerStats::modifyPlayerStats()
{
  if (health - 10 >= 0)
  {
    health -= 10;
  }
  else
  {
    health = 0;
  }
  armor += 10;
  attack += 15;
}