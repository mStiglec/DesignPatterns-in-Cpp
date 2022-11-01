#include <iostream>

#include "../../inc/roof/snow_roof.h"

SnowRoof::SnowRoof(double _height)
	:Roof(_height){
		
	std::cout << "Build snow roof" << std::endl;
}

void SnowRoof::protectFromRain() {
	std::cout << "Protect from rain" << std::endl;
}