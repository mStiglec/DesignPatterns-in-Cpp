#include <iostream>

#include "random.h"

int main(int argc, char** argv)
{
  Random* random = Random::getInstance();
  Random* random2 = Random::getInstance();

  random->changeRandomNumber();
  std::cout << random->getRandomNumber() << std::endl;
  std::cout << random2->getRandomNumber() << std::endl;

  random2->changeRandomNumber();
  std::cout << random->getRandomNumber() << std::endl;
  std::cout << random2->getRandomNumber() << std::endl;

  delete random;
  // delete random2; --> will cause double allocation because
  // random and random2 are pointing to same memory
}