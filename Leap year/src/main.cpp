#include "leapYear/leapYear.h"
#include <iostream>

int main()
{
    int year;
    std::cout << "Enter a year: " << std::endl;
    std::cin >> year;
    std::cout << is_leap_year(year) << std::endl;
}