#include <iostream>

#include "../inc/hamburger.h"
#include "../utils/inc/enum_to_string.h"

Hamburger::Hamburger(Size _size): size(_size){
	std::cout << "Making hamburger..." << std::endl;
	std::cout << "Put meat on barbeque" << std::endl;
	std::cout << "Cut vegetables" << std::endl;
	std::cout << "Cut bread buns" << std::endl;
	std::cout << "Put meat and ingridients" << std::endl;
	std::cout << "Fry potato fries" << std::endl << std::endl;
}

void Hamburger::serve() const{
	std::cout << "Serving hamburger..." << std::endl;
	std::cout << "Cut hamburger in half" << std::endl;
	std::cout << "Serve: " << utils::getSize(size) << " size hamburger" << std::endl;
}