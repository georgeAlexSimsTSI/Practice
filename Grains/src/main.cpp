#include "grains/grains.h"

#include <iostream>
using std::cout;
using std::endl;

int main()
{
    cout << "Total should be : 18446744073709551615ULL " << endl;
    cout << "Actual: " << grains::total() << endl;
    cout << "Square 64 should be : 9223372036854775808ULL  " << endl;
    cout << "Actual: " << grains::square(64) << endl;
    cout << "Square 32 should be : 2147483648ULL   " << endl;
    cout << "Actual: " << grains::square(32) << endl;
    cout << "Square 16 should be : 32768ULL   " << endl;
    cout << "Actual: " << grains::square(16) << endl;
    return 0;
}