#include "../inc/forest_extension.h"

#include <iostream>

ForestExtension::ForestExtension(unsigned int _numOfPlayers) : numOfPlayers(_numOfPlayers) {}

void ForestExtension::attachExtension()
{
  std::cout << "forest extension attached" << std::endl;
}

void ForestExtension::play()
{
  std::cout << "You are lost in the forest" << std::endl;
}

void ForestExtension::dettachExtension()
{
  std::cout << "forest extension dettached" << std::endl;
}