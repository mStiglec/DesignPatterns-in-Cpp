#include <iostream>

#include "../inc/gun.h"

Gun::Gun(): Weapon(25,0,0,0){}

void Gun::attack(){
		std::cout << "Player attacked with normal gun: damage dealt: "
			  	  << damage << std::endl;
}