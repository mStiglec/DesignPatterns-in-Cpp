#include "../inc/chicken_restaurant.h"

#include <iostream>

#include "../enum/dressing.h"
#include "../enum/salad.h"
#include "../inc/chicken.h"

std::shared_ptr<Meal> ChickenRestaurant::makeMeal() const
{
  // can be extended to ask user which salad/dressing he wants
  return std::make_shared<Chicken>(Salad::GREEK, Dressing::BBQ);
}

void ChickenRestaurant::serveMeal() const
{
  std::shared_ptr<Meal> meal = this->makeMeal();

  this->cleanTable();
  meal->serve();
}

void ChickenRestaurant::cleanTable() const
{
  std::cout << "Table cleaned" << std::endl << std::endl;
}
