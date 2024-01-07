#ifndef SELECTION_SORT_H
#define SELECTION_SORT_H

#include <memory>

#include "sort_algorithm.h"

class SelectionSort : public SortAlgorithm {
  private:
    void swap(int& a, int& b);

  public:
    SelectionSort() = default;

    virtual std::vector<int>& sort(std::vector<int>& vec) override;
};

#endif  // SELECTION_SORT_H
