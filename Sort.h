#include <vector>

#ifndef Sort_h
#define Sort_h

class Sort
{
public:
    Sort() {};
    virtual std::vector<int> sort(std::vector<int> list) = 0;
};

#endif