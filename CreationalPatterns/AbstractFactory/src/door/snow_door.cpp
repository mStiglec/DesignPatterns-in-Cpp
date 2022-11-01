#include <iostream>

#include "../../inc/door/snow_door.h"

SnowDoor::SnowDoor(double _height, double _width)
	:Door(_height, _width){

	std::cout << "Build snow door" << std::endl;
}

void SnowDoor::open(){
	std::cout << "Open snow door" << std::endl;
}

void SnowDoor::close(){
	std::cout << "Close snow door" << std::endl;
}