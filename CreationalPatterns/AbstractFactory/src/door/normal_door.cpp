#include "../../inc/door/normal_door.h"

#include <iostream>

NormalDoor::NormalDoor(double _height, double _width) : Door(_height, _width)
{
  std::cout << "Build normal door" << std::endl;
}

void NormalDoor::open()
{
  std::cout << "Open normal door" << std::endl;
}

void NormalDoor::close()
{
  std::cout << "Close normal door" << std::endl;
}