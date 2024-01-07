#include <iostream>
#include <memory>

#include "inc/door/door.h"
#include "inc/door/normal_door.h"
#include "inc/factory/house_factory.h"
#include "inc/factory/igloo_factory.h"
#include "inc/factory/normal_house_factory.h"
#include "inc/factory/treehouse_factory.h"

int main()
{
  std::cout << "Enter your location:" << std::endl;
  std::cout << "Alaska: 1" << std::endl;
  std::cout << "Europe: 2" << std::endl;
  std::cout << "Amazon forest: 3" << std::endl;

  std::shared_ptr<HouseFactory> houseFactory;

  int input;
  std::cin >> input;
  do
  {
    switch (input)
    {
      case 1:
        houseFactory = std::make_shared<IglooFactory>();
        break;
      case 2:
        houseFactory = std::make_shared<NormalHouseFactory>();
        break;
      case 3:
        houseFactory = std::make_shared<TreehouseFactory>();
        break;
      default:
        std::cout << "Wrong input" << std::endl;
    }
  }
  while (input < 0 || input > 3);

  std::cout << "House is building..." << std::endl;

  // you can build only one or two of the products (connection with builder??)
  // if you want to build other types of door or roof then
  // another factory should be used
  std::shared_ptr<Door> door = houseFactory->buildDoor(200, 80);
  std::vector<std::shared_ptr<Window>> windows = houseFactory->buildWindows(20, 30);
  std::shared_ptr<Roof> roof = houseFactory->buildRoof(100);

  std::cout << "House is completed" << std::endl;
}