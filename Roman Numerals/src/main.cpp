#include "RomanNumerals/romanNumeral.h"

#include <iostream>

int main()
{
    int target = 59;
    std::cout << target << " in roman is: " << intToRoman(target) << std::endl;
    target = 93;
    std::cout << target << " in roman is: " << intToRoman(target) << std::endl;
    return 0;
}