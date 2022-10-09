#include <iostream>
#include <random>
#include "random.h"

Random* Random::random = nullptr;

Random* Random::getInstance(){
	if(random == nullptr){
		random = new Random();
	}
	return random;
}

void Random::changeRandomNumber(){

    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> distr(25, 63);

    randomNumber = distr(gen);
}

double Random::getRandomNumber() const{
	return randomNumber;
}
