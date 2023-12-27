#include "../inc/array_handler.h"

#include <algorithm>
#include <iostream>

ArrayHandler::ArrayHandler(std::vector<int>& vec)
{
  this->vec = vec;
}

void ArrayHandler::handleArray()
{
  sort();
  removeDuplicates();
  isSorted();
  printArray();
}

void ArrayHandler::removeDuplicates()
{
  vec.erase(unique(vec.begin(), vec.end()), vec.end());
}

bool ArrayHandler::isSorted()
{
  return std::is_sorted(vec.cbegin(), vec.cend());
}

void ArrayHandler::printArray()
{
  for (long unsigned int i = 0; i < vec.size(); i++)
  {
    std::cout << vec[i] << " ";
  }
  std::cout << std::endl;
}