#include "../inc/board_game1.h"

#include <iostream>
#include <memory>
#include <string>

BoardGame1::BoardGame1(unsigned int _numOfPlayers, std::string _rules)
    : numOfPlayers(_numOfPlayers), rules(_rules)
{}

void BoardGame1::setBoard()
{
  std::cout << "Set GameBoard1" << std::endl;
}

void BoardGame1::cleanBoard()
{
  if (this->extension != nullptr)
  {
    std::cout << "Clean GameBoard1 and extension" << std::endl;
  }
  else
  {
    std::cout << "Clean GameBoard1" << std::endl;
  }
}

void BoardGame1::play()
{
  if (this->extension != nullptr)
  {
    std::cout << "Throwing dice ..." << std::endl;
    extension->play();
  }
  else
  {
    std::cout << "Throwing dice ..." << std::endl;
  }
}

void BoardGame1::setExtension(std::shared_ptr<Extension> _extension)
{
  this->extension = _extension;
  extension->attachExtension();
}
