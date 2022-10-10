#include "Sort.h"
#include <vector>

#ifndef BubbleSort_h
#define BubbleSort_h

class BubbleSort : public Sort
{
public:
    BubbleSort() {};
    std::vector<int> sort(std::vector<int> list);
};

#endif