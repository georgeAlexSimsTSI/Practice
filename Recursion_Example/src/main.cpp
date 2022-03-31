#include "Recursive_Function/recursiveFunc.h"

#include <iostream>

int main()
{
    int n;
    std::set<int> sequence;
    std::cout << "Enter a number " << std::endl;
    std::cin >> n;
    std::cout << "The " << n << "th number is: " << fib(n, sequence) << std::endl;

    std::cout << 0 << std::endl
              << 1 << std::endl;
    for (auto i : sequence)
    {
        std::cout << i << std::endl;
    }
}