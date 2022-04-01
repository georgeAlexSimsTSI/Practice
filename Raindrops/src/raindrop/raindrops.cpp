#include "raindrops.h"

string convert(int i)
{
    string str = "";
    if (i % 3 == 0)
        str += "Pling";
    if (i % 5 == 0)
        str += "Plang";
    if (i % 7 == 0)
        str += "Plong";
    if (str.empty())
        str = std::to_string(i);
    return str;
}