#include "nthPrime.h"

bool isPrime(long n)
{
    for (auto i = 2l; i < n / 2l; ++i)
        if (n % i == 0)
            return false;
    return true;
}

long nthPrime(int n)
{
    int count = 0, num = 2;
    while (count <= n)
    {
        if (isPrime(num))
            ++count;
        ++num;
    }
    return --num;
}