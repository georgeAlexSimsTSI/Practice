#include "reverseString.h"

string reverse_str(string str)
{
    string rev = "";
    for (int i = str.size(); i > 0; --i)
        rev += str[i - 1];
    return rev;
}

void reverse_str_inplace(string &str)
{
    int mid;
    if (str.size() % 2 == 0)
        mid = (str.size() / 2) - 1;
    else
        mid = str.size() / 2;
    for (int i = 0; i <= mid; ++i)
        std::swap(str[i], str[str.size() - i - 1]);
}