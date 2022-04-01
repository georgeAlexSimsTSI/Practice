#include "nthPrime/nthPrime.h"
#include <iostream>

int main()
{
    int n;
    std::cout << "Enter a number: " << std::endl;
    std::cin >> n;
    std::cout << "The " << n << "th prime number is: " << std::endl
              << nthPrime(n);
    return 0;
}