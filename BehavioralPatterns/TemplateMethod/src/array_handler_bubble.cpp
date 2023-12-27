#include "../inc/array_handler_bubble.h"

#include <iostream>

ArrayHandlerBubble::ArrayHandlerBubble(std::vector<int>& vec) : ArrayHandler(vec){};

void ArrayHandlerBubble::sort()
{
  std::cout << "bubble sorting..." << std::endl;
  bool swapp = true;
  while (swapp)
  {
    swapp = false;
    for (size_t i = 0; i < vec.size() - 1; i++)
    {
      if (vec[i] > vec[i + 1])
      {
        int temp = vec[i + 1];
        vec[i + 1] = vec[i];
        vec[i] = temp;
        swapp = true;
      }
    }
  }
}