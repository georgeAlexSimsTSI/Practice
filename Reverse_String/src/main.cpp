#include <iostream>
#include "ReverseString/reverseString.h"

int main()
{
    string str = "people";
    std::cout << reverse_str(str) << std::endl;
    reverse_str_inplace(str);
    std::cout << str << std::endl;

    return 0;
}