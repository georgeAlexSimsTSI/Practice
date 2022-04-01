#include "hamming.h"

namespace hamming
{

    int compute(string x, string y)
    {
        int diff = 0;
        if (x.size() != y.size())
            throw std::domain_error("Strings are different sizes");
        for (long unsigned int i = 0; i < x.size(); ++i)
        {
            if (x[i] != y[i])
                ++diff;
        }
        return diff;
    }

} // namespace hamming