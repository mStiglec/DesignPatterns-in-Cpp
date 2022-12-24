#include "../inc/selection_sort.h"
#include <iostream>

std::vector<int>& SelectionSort::sort(std::vector<int>& vec){
	for(unsigned int i=0;i<vec.size()-1;i++){
		int min = i;
		for(unsigned int j=i+1;j<vec.size();j++){
			if(vec[min] > vec[j]){
				min = j;
			}
		}
		swap(vec[min], vec[i]);
	}
	return vec;
}

void SelectionSort::swap(int& a, int& b){
	int temp = a;
	a = b;
	b = temp;
}