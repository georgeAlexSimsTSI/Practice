#include "grains.h"

namespace grains
{

    unsigned long long square(int n)
    {
        unsigned long long ans = 1ull;
        for (int i = 1; i < n; ++i)
            ans = ans + ans;
        return ans;
    }

    unsigned long long total()
    {
        unsigned long long ans = 0ull;
        for (int i = 1; i <= 64; ++i)
            ans += square(i);
        return ans;
    }

} // namespace grains