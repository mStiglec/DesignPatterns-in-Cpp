#include "../inc/array_handler_selection.h"

#include <iostream>

ArrayHandlerSelection::ArrayHandlerSelection(std::vector<int>& vec) : ArrayHandler(vec){};

void ArrayHandlerSelection::sort()
{
  std::cout << "selection sorting..." << std::endl;
  for (size_t i = 0; i < vec.size() - 1; i++)
  {
    int min = i;
    for (size_t j = i + 1; j < vec.size(); j++)
    {
      if (vec[j] < vec[min])
      {
        min = j;
      }
    }
    int temp = vec[i];
    vec[i] = vec[min];
    vec[min] = temp;
  }
}