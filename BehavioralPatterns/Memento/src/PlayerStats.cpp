#include <iostream>

#include "../inc/PlayerStats.h"

PlayerStats::PlayerStats(){};

PlayerStats::PlayerStats(
  std::string _name,
  int _health,
  unsigned int _armor,
  unsigned int _attack)
{
	name = _name;
	health = _health;
	armor = _armor;
	attack = _attack;
};

void PlayerStats::displayPlayerStats(){
  std::cout << "Health: " << health << std::endl;
  std::cout << "Armor: " << armor << std::endl;
  std::cout << "Attack: " << attack << std::endl;
  std::cout << std::endl;
}

void PlayerStats::modifyPlayerStats(){
  if(health - 10 >= 0){
	health -= 10;
  }else{
	health = 0;
  }
  armor += 10;
  attack += 15;
}