#include <vector>
#include <math.h>
bool narcissistic(int value)
{
    if (value < 10)
        return true;

    std::vector<int> nums;
    int tmp = value;

    while (tmp > 0)
    {
        nums.push_back(tmp % 10);
        tmp /= 10;
    }
    int sum = 0;

    for (auto i : nums)
    {
        sum += pow(i, nums.size());
    }

    return (sum == value);
}

int main()
{

    narcissistic(7);

    narcissistic(15);

    return 0;
}