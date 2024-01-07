#include "../../inc/factory/treehouse_factory.h"

#include "../../inc/door/wooden_door.h"
#include "../../inc/roof/wooden_roof.h"
#include "../../inc/window/wooden_window.h"

std::shared_ptr<Door> TreehouseFactory::buildDoor(double height, double width)
{
  return std::make_shared<WoodenDoor>(height, width);
}

std::vector<std::shared_ptr<Window>> TreehouseFactory::buildWindows(double height, double width)
{
  std::vector<std::shared_ptr<Window>> windows;
  windows.push_back(std::make_shared<WoodenWindow>(height, width));
  windows.push_back(std::make_shared<WoodenWindow>(height, width));
  return windows;
}

std::shared_ptr<Roof> TreehouseFactory::buildRoof(double height)
{
  return std::make_shared<WoodenRoof>(height);
}