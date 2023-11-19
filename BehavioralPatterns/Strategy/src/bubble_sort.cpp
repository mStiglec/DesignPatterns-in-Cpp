#include "../inc/bubble_sort.h"

std::vector<int>& BubbleSort::sort(std::vector<int>& vec)
{
  for (unsigned int i = 0; i < vec.size() - 1; i++)
  {
    int flag = 1;
    for (unsigned int j = 0; j < vec.size() - i - 1; j++)
    {
      if (vec[j] > vec[j + 1])
      {
        flag = 0;
        swap(vec[j], vec[j + 1]);
      }
    }
    if (flag)
    {
      return vec;
    }
  }
  return vec;
}

void BubbleSort::swap(int& a, int& b)
{
  int temp = a;
  a = b;
  b = temp;
}