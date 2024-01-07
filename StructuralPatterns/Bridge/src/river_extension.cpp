#include "../inc/river_extension.h"

#include <iostream>

RiverExtension::RiverExtension(unsigned int _numOfPlayers) : numOfPlayers(_numOfPlayers) {}

void RiverExtension::attachExtension()
{
  std::cout << "river extension attached" << std::endl;
}

void RiverExtension::play()
{
  std::cout << "You fell into the river" << std::endl;
}

void RiverExtension::dettachExtension()
{
  std::cout << "river extension dettached" << std::endl;
}