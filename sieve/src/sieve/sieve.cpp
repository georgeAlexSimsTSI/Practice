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

    vector<bool> listOfPrimes(int range)
    {
        vector<bool> is_prime_list(range + 1, true);
        is_prime_list[0] = false;
        is_prime_list[1] = false;

        for (int div = 2; div <= range; ++div)
        {
            if (!is_prime_list[div])
                continue;
            for (int dividend = div + div; dividend <= range; dividend += div)
            {
                is_prime_list[dividend] = false;
            }
        }
        return is_prime_list;
    }

    // based on community submissions from exercism
    vector<int> primesV2(int range)
    {
        vector<bool> is_prime_list = listOfPrimes(range);
        vector<int> output_list;
        for (int i = 0; i <= range; ++i)
        {
            if (is_prime_list[i])
                output_list.push_back(i);
        }
        return output_list;
    }

} // namespace sieve