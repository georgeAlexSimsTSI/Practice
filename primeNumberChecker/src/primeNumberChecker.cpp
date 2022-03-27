
bool isPrime(int n)
{

    // Edge Case
    if (n <= 1)
        return false;

    for (int i = 2; i < (n + 1 / 2); i++) // check every number from 2 to n/2
    {
        if (n % i == 0)
            return false;
    }
    return true;
}