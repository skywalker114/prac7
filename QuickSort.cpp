#include "QuickSort.h"
#include <vector>

std::vector<int> QuickSort::sort(std::vector<int> list)
{
    if (list.size() <= 1) return list;
    int pivot = list[0];
    std::vector<int> less;
    std::vector<int> greater;
    for (int i = 1; i < list.size(); i++)
    {
        if (list[i] < pivot) less.push_back(list[i]);
        else greater.push_back(list[i]);
    }
    std::vector<int> sortedLess = sort(less);
    std::vector<int> sortedGreater = sort(greater);
    sortedLess.push_back(pivot);
    for (int i = 0; i < sortedGreater.size(); i++) sortedLess.push_back(sortedGreater[i]);
    return sortedLess;
}