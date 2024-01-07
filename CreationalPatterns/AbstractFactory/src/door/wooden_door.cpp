#include "../../inc/door/wooden_door.h"

#include <iostream>

WoodenDoor::WoodenDoor(double _height, double _width) : Door(_height, _width)
{
  std::cout << "Build wooden door" << std::endl;
}

void WoodenDoor::open()
{
  std::cout << "Open wooden door" << std::endl;
}

void WoodenDoor::close()
{
  std::cout << "Close wooden door" << std::endl;
}