#include "../inc/chicken.h"

#include <iostream>

#include "../utils/inc/enum_to_string.h"

Chicken::Chicken(Salad _salad, Dressing _dressing) : salad(_salad), dressing(_dressing)
{
  std::cout << "Making chicken..." << std::endl;
  std::cout << "Preheat oven" << std::endl;
  std::cout << "Cut chicken" << std::endl;
  std::cout << "Season chicken" << std::endl;
  std::cout << "Put in oven" << std::endl << std::endl;
}

void Chicken::serve() const
{
  std::cout << "Serving chicken..." << std::endl;
  std::cout << "Put chicken on plate" << std::endl;
  std::cout << "Serve with " << utils::getSalad(salad) << " salad"
            << " and " << utils::getDressing(dressing) << std::endl;
}