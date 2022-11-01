#include "../../inc/factory/igloo_factory.h"
#include "../../inc/door/snow_door.h"
#include "../../inc/window/snow_window.h"
#include "../../inc/roof/snow_roof.h"

std::shared_ptr<Door> IglooFactory:: buildDoor(double height, double width){
	return std::make_shared<SnowDoor>(height, width);
}

std::vector<std::shared_ptr<Window>> IglooFactory::buildWindows(double height, double width){
	std::vector<std::shared_ptr<Window>> windows;
	windows.push_back(std::make_shared<SnowWindow>(height,width));
	windows.push_back(std::make_shared<SnowWindow>(height,width));
	return windows;
}

std::shared_ptr<Roof> IglooFactory::buildRoof(double height){
	return std::make_shared<SnowRoof>(height);
}