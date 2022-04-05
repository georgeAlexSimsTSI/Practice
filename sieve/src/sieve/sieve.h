#include <vector>
#include "../prime/nthPrime.h"
using std::vector;

namespace sieve
{
    vector<int> primeMultiplesUpTo(int prime, int lim);
    vector<int> primes(int range);
    vector<bool> listOfPrimes(int range);
    vector<int> primesV2(int range);
} // namespace sieve