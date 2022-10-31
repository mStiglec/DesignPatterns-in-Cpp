#include <iostream>

#include "../inc/pizza.h"
#include "../utils/inc/enum_to_string.h"

Pizza::Pizza(std::string _type, Size _size): type(_type),size(_size){
	std::cout << "Making pizza..." << std::endl;
	std::cout << "Knead the dough" << std::endl;
	std::cout << "Cover dough with plastic wrap" << std::endl;
	std::cout << "Divide the dough" << std::endl;
	std::cout << "Shape the dough" << std::endl;
	std::cout << "Put ingridients" << std::endl;
	std::cout << "Bake pizza" << std::endl << std::endl;
}

void Pizza::serve() const{
	std::cout << "Serving pizza..." << std::endl;
	std::cout << "Cut pizza in triangular shapes" << std::endl;
	std::cout << "Serve: " << utils::getSize(size) << " " << type << std::endl;
}