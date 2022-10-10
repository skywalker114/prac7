#include "RecursiveBinarySearch.h"
#include "BubbleSort.h"
#include "QuickSort.h"
#include <vector>
#include<math.h>

bool RecursiveBinarySearch::search(std::vector<int> list, int target)
{
    if (list.size() == 0 || (list.size() == 1) && (list[0] != target)) return false;
    int mid = floor(list.size() / 2);
    if (list[mid] == target) return true;
    else if (list[mid] > target)
    {
        std::vector<int> left(list.begin(), list.begin() + mid);
        return search(left, target);
    }
    std::vector<int> right(list.begin() + mid, list.end());
    return search(right, target);
}