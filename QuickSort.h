#include "Sort.h"
#include <vector>

#ifndef QuickSort_h
#define QuickSort_h

class QuickSort : public Sort
{
public:
    QuickSort() {};
    std::vector<int> sort(std::vector<int> list);
};

#endif