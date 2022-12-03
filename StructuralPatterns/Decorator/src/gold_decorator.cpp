#include <iostream>

#include "../inc/gold_decorator.h"

GoldDecorator::GoldDecorator(std::shared_ptr<Weapon> weapon)
	: WeaponDecorator(weapon){
		std::cout << "Your sword is now golden" << std::endl;
}

void GoldDecorator::attack(){
	weapon->attack();
	std::cout << "You attacked with golden sword" << std::endl;
}
