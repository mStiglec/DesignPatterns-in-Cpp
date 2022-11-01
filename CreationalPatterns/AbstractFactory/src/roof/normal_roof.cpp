#include <iostream>

#include "../../inc/roof/normal_roof.h"

NormalRoof::NormalRoof(double _height)
	:Roof(_height){
		
	std::cout << "Build normal roof" << std::endl;
}

void NormalRoof::protectFromRain(){
	std::cout << "Protect from rain" << std::endl;
}