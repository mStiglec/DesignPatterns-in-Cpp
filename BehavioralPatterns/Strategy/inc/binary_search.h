#ifndef BINARY_SEARCH_H
#define BINARY_SEARCH_H

#include <memory>
#include <vector>

#include "../inc/sort_algorithm.h"

// Binary search need vector to be sorted before searching
// This class uses sort algorithm to sort vector before search

class BinarySearch {
 private:
  std::shared_ptr<SortAlgorithm> sortAlg;

 public:
  BinarySearch(std::shared_ptr<SortAlgorithm> sortAlg);
  void setSortAlgorithm(std::shared_ptr<SortAlgorithm> sortAlg);
  bool search(std::vector<int>& vec, int num);
};

#endif  // BINARY_SEARCH_H
