#include "prime/nthPrime.h"
#include "sieve/sieve.h"

#include <iostream>
#include <vector>

int main()
{
    auto primes = sieve::primes(13);
    for (auto i = primes.begin(); i != primes.end(); ++i)
    {
        std::cout << *i << std::endl;
    }
    return 0;
}