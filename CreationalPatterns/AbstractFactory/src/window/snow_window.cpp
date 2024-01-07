#include "../../inc/window/snow_window.h"

#include <iostream>

SnowWindow::SnowWindow(double _height, double _width) : Window(_height, _width)
{
  std::cout << "Build snow window" << std::endl;
}

void SnowWindow::open()
{
  std::cout << "Open snow window" << std::endl;
}

void SnowWindow::close()
{
  std::cout << "Close snow window" << std::endl;
}