#include "recursiveFunc.h"

int fib(int n)
{
    return (n < 2) ? n : (fib(n - 1) + fib(n - 2));
}

int fib(int n, std::vector<int> &sequence) // Bodge job as I had already written the one above
{
    for (int i = n; i > 0; --i)
    {
        sequence.push_back(fib(i));
    }
}

int fib(int n, std::set<int> &sequence) // not happy with this but im too tired so ill do it later
{
    if (n < 2)
    {
        // sequence.push_back(n);
        return n;
    }
    int temp1 = fib(n - 1, sequence);
    int temp2 = fib(n - 2, sequence);
    sequence.insert(temp2 + temp1);
    return temp1 + temp2;
}