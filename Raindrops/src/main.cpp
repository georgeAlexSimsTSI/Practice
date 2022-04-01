#include "raindrop/raindrops.h"
#include <iostream>

int main()
{
    // basically fizz buzz with extra steps
    for (int i = 0; i < 100; ++i)
    {
        std::cout << convert(i) << std::endl;
    }
    return 0;
}