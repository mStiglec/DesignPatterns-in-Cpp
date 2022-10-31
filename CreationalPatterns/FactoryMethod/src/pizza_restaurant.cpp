#include <iostream>

#include "../enum/size.h"
#include "../inc/pizza.h"
#include "../inc/pizza_restaurant.h"

std::shared_ptr<Meal> PizzaRestaurant::makeMeal() const{
	//can be extended to ask user which pizza size/type he wants
	return std::make_shared<Pizza>("Vesuvia", Size::NORMAL);
}

void PizzaRestaurant::serveMeal() const{
	std::shared_ptr<Meal> meal = this->makeMeal();
	
	this->cleanTable();
	meal->serve();
}

void PizzaRestaurant::cleanTable() const{
	std::cout << "Table cleaned" << std::endl << std::endl;;
}

