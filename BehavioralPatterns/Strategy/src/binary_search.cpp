#include "../inc/binary_search.h"

#include <iostream>

BinarySearch::BinarySearch(std::shared_ptr<SortAlgorithm> _sortAlg)
    : sortAlg(_sortAlg)
{}

void BinarySearch::setSortAlgorithm(std::shared_ptr<SortAlgorithm> sortAlg)
{
  this->sortAlg = sortAlg;
}

bool BinarySearch::search(std::vector<int>& vec, int num)
{
  vec = sortAlg->sort(vec);

  int begin = 0;
  int end = vec.size() - 1;

  while (begin <= end)
  {
    int half = begin + (end - begin) / 2;
    if (vec[half] == num)
    {
      return 1;
    }
    else if (num > vec[half])
    {
      begin = half + 1;
    }
    else
    {
      end = half - 1;
    }
  }
  return 0;
}