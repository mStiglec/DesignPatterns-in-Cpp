#include <iostream>

#include "../../inc/roof/wooden_roof.h"

WoodenRoof::WoodenRoof(double _height)
	:Roof(_height){
		
	std::cout << "Build wooden roof" << std::endl;
}

void WoodenRoof::protectFromRain() {
	std::cout << "Protect from rain" << std::endl;
}