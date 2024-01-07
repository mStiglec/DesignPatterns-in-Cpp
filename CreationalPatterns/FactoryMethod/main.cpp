#include <iostream>
#include <memory>

#include "inc/chicken_restaurant.h"
#include "inc/hamburger_restaurant.h"
#include "inc/pizza_restaurant.h"
#include "inc/restaurant.h"

int main()
{
  std::shared_ptr<Restaurant> restaurant;

  int input;
  std::cout << "What do you want to eat (enter number):\n"
            << "Chicken - 1\n"
            << "Hamburger - 2\n"
            << "Pizza -3" << std::endl;
  while (true)
  {
    std::cin >> input;
    do
    {
      if (input == 1)
      {
        restaurant = std::make_shared<ChickenRestaurant>();
        restaurant->serveMeal();
      }
      else if (input == 2)
      {
        restaurant = std::make_shared<HamburgerRestaurant>();
        restaurant->serveMeal();
      }
      else if (input == 3)
      {
        restaurant = std::make_shared<PizzaRestaurant>();
        restaurant->serveMeal();
      }
      else
      {
        std::cout << "Wrong input, please try again" << std::endl;
      }
    }
    while (input < 0 && input > 3);
    std::cout << std::endl;
  }
}