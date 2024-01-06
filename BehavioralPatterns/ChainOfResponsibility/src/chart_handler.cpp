#include "../inc/chart_handler.h"

#include <iostream>
#include <random>

void ChartHandler::process(User* user, UserDatabase* db)
{
  std::random_device rd;
  std::mt19937 rng(rd());
  std::uniform_int_distribution<int> dist(1, 30);
  if (user->getChartLimit() > dist(rng))
  {
    nextHandler->process(user, db);
  }
  else
  {
    std::cout << "Not enough space in chart" << std::endl;
  }
}