#ifndef SORT_ALGORITHM_H
#define SORT_ALGORITHM_H

#include <vector>

class SortAlgorithm{
	public:
		virtual std::vector<int>& sort(std::vector<int>& vec) = 0;
};


#endif // SORT_ALGORITHM_H
