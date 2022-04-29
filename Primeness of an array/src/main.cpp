#include <iostream>
namespace primes
{
    bool isPrime(const int &num)
    {
        if (num <= 1)
            return false;
        for (int j = 2; j <= num / 2; ++j)
        {
            if (num % j == 0)
                return false;
        }
        return true;
    }

    int primesOfArray(int *arr, const int &n)
    {
        int count = 0;
        for (int i = 0; i < n; ++i)
        {
            if (isPrime(*arr))
                count++;
            arr++;
        }
        return count;
    }
}

int main()
{
    int arr[] = {1, 3, 5, 4, 8, 13, 11};
    int n = sizeof(arr) / sizeof(int);
    std::cout << "In the array there are: " << primes::primesOfArray(arr, n) << " primes" << std::endl;
}