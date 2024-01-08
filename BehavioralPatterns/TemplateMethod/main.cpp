#include <algorithm>
#include <iostream>
#include <random>

#include "inc/array_handler.h"
#include "inc/array_handler_bubble.h"
#include "inc/array_handler_selection.h"

void populateVector(std::vector<int>& v)
{
  v.clear();
  std::random_device rd;
  std::mt19937 rng(rd());
  std::uniform_int_distribution<int> dist(1, 10);
  for (unsigned int i = 0; i < 20; i++)
  {
    v.push_back(dist(rng));
  }
}

int main(void)
{
  std::vector<int> vec;

  populateVector(vec);
  std::vector<ArrayHandler*> arrayHandlers = {new ArrayHandlerBubble(vec),
                                              new ArrayHandlerSelection(vec)};
  for (auto handler : arrayHandlers)
  {
    handler->handleArray();
  }

  for (auto array_handler : arrayHandlers)
  {
    delete array_handler;
  }

  arrayHandlers.clear();
}