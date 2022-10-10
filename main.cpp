#include "BubbleSort.h"
#include "QuickSort.h"
#include "RecursiveBinarySearch.h"
#include <vector>
#include <string>
#include <iostream>

int main()
{
    QuickSort qs;
    RecursiveBinarySearch rbs;
    int num = 0;
    std::string found;
    std::vector<int> vec;
    while (std::cin >> num) vec.push_back(num);
    vec = qs.sort(vec);
    if (rbs.search(vec, 1)) found = "true";
    else found = "false";
    std::cout << found << " ";
    for (int i = 0; i < vec.size(); i++) std::cout << vec[i] << " ";
    return 0;
}