#include "binarySearch/binarySearch.h"
#include <vector>
#include <iostream>
int main()
{
    std::vector<int> vec1{1, 2, 3, 4, 5, 6, 7, 8, 9};
    int target = 8;
    std::cout << "The target: " << target << " is in position: " << binSearch(vec1, target) << std::endl;
    target = 8;
    std::cout << "The target: " << target << " is in position: " << binSearch(vec1, target) << std::endl;
    target = 3;
    std::cout << "The target: " << target << " is in position: " << binSearch(vec1, target) << std::endl;
    target = 2;
    std::cout << "The target: " << target << " is in position: " << binSearch(vec1, target) << std::endl;
    target = 5;
    std::cout << "The target: " << target << " is in position: " << binSearch(vec1, target) << std::endl;
}