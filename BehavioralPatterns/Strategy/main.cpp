#include <algorithm>
#include <chrono>
#include <iostream>
#include <memory>
#include <random>
#include <vector>

#include "inc/binary_search.h"
#include "inc/bubble_sort.h"
#include "inc/selection_sort.h"
#include "inc/sort_algorithm.h"

int main()
{
  std::random_device rnd_device;
  std::mt19937 gen{rnd_device()};
  std::uniform_int_distribution<int> dist{1, 100};

  std::vector<int> vec;
  for (int i = 0; i < 10; i++)
  {
    vec.push_back(dist(gen));
    std::cout << vec[i] << " ";
  }
  std::cout << std::endl;

  std::shared_ptr<SortAlgorithm> sortAlg = std::make_shared<BubbleSort>();
  std::shared_ptr<BinarySearch> binarySearch =
      std::make_shared<BinarySearch>(sortAlg);

  std::cout << "Number is found: " << binarySearch->search(vec, 17)
            << std::endl;

  vec.clear();
  for (int i = 0; i < 10; i++)
  {
    vec.push_back(dist(gen));
    std::cout << vec[i] << " ";
  }
  std::cout << std::endl;

  sortAlg = std::make_shared<SelectionSort>();
  binarySearch->setSortAlgorithm(sortAlg);

  std::cout << "Number is found: " << binarySearch->search(vec, 17)
            << std::endl;
}