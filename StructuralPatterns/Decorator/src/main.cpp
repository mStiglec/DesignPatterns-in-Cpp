#include <iostream>
#include <memory>

#include "../inc/gold_decorator.h"
#include "../inc/fire_decorator.h"
#include "../inc/poison_decorator.h"

#include "../inc/gun.h"
#include "../inc/bow_and_arrow.h"
#include "../inc/sword.h"

int main(){
	std::shared_ptr<Weapon> sword = std::make_shared<Sword>();
	sword->attack();
	sword->attack();
	sword->attack();

	std::cout << "Your sword leveled up" << std::endl;
	sword = std::make_shared<GoldDecorator>(sword);
	sword->attack();
	sword->attack();
	sword->attack();

	std::cout << "Your sword leveled up" << std::endl;
	sword = std::make_shared<PoisonDecorator>(sword);
	sword->attack();
	sword->attack();
	sword->attack();
	
	std::cout << "Your sword leveled up" << std::endl;
	sword = std::make_shared<FireDecorator>(sword);
	sword->attack();
	sword->attack();
	sword->attack();
}