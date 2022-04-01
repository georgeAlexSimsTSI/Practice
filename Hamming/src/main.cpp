#include "hamming/hamming.h"
#include <iostream>

int main()
{
    std::string x, y;
    std::cout << "Enter 2 strings to compute the hamming difference between them: " << std::endl;
    std::cin >> x;
    std::cin >> y;
    std::cout << "The hamming diff is: ";
    try
    {
        int diff = hamming::compute(x, y);
        std::cout << "The diff is: " << diff << std::endl;
    }
    catch (...)
    {
        std::cout << "Error, strings should be the same length" << std::endl;
    }
}