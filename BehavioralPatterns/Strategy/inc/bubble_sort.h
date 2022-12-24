#ifndef BUBBLE_SORT_H
#define BUBBLE_SORT_H

#include <vector>

#include "sort_algorithm.h"

class BubbleSort : public SortAlgorithm {
	private:
		void swap(int& a, int& b);

	public:
		BubbleSort() = default;

		virtual std::vector<int>& sort(std::vector<int>& vec) override;

};


#endif // BUBBLE_SORT_H
