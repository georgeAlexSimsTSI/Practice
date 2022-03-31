
#include "binarySearch.h"

inline int midpoint(int x, int y) // Unnecessary but wanted to test out inline functions
{
    return (x + y) / 2;
}

// return -1 if not found otherwise return the index
int binSearch(vector<int> arr, int target)
{
    int l = 0, r = arr.size() - 1, mid;

    while (r >= l)
    {
        mid = midpoint(l, r);
        if (arr[mid] == target)
            return mid;

        if (arr[mid] > target)
            r = mid - 1;
        else
            l = mid + 1;
    }
    return -1; // throw std::domain_error("Target not in array");
}