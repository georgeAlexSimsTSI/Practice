#include "sieve.h"

namespace sieve
{
    vector<int> primeMultiplesUpTo(int prime, int lim)
    {
        int current = prime;
        vector<int> multiples;
        while (current <= lim)
        {
            multiples.push_back(current);
            current += prime;
        }
        return multiples;
    }

    vector<int> primes(int range)
    {
        vector<int> ans;
        int prime = 2;
        while (prime <= range)
        {
            ans.push_back(prime);
            prime = prime::nextPrime(prime);
        }

        return ans;
        return ans;
    }

} // namespace sieve