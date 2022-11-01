#include "../../inc/factory/normal_house_factory.h"
#include "../../inc/door/normal_door.h"
#include "../../inc/window/normal_window.h"
#include "../../inc/roof/normal_roof.h"

std::shared_ptr<Door> NormalHouseFactory:: buildDoor(double height, double width){
	return std::make_shared<NormalDoor>(height, width);
}

std::vector<std::shared_ptr<Window>> NormalHouseFactory::buildWindows(double height, double width){
	std::vector<std::shared_ptr<Window>> windows;
	windows.push_back(std::make_shared<NormalWindow>(height,width));
	windows.push_back(std::make_shared<NormalWindow>(height,width));
	return windows;
}

std::shared_ptr<Roof> NormalHouseFactory::buildRoof(double height){
	return std::make_shared<NormalRoof>(height);
}