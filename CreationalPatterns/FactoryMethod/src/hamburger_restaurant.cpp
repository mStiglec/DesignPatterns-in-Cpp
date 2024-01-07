#include "../inc/hamburger_restaurant.h"

#include <iostream>

#include "../enum/size.h"
#include "../inc/hamburger.h"

std::shared_ptr<Meal> HamburgerRestaurant::makeMeal() const
{
  // can be extended to ask user what hamburger size he wants
  return std::make_shared<Hamburger>(Size::NORMAL);
}

void HamburgerRestaurant::serveMeal() const
{
  std::shared_ptr<Meal> meal = this->makeMeal();

  this->cleanTable();
  meal->serve();
}

void HamburgerRestaurant::cleanTable() const
{
  std::cout << "Table cleaned" << std::endl << std::endl;
  ;
}
