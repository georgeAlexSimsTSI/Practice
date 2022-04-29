#include <iostream>
namespace sort
{
    void insertionSort(int arr[], const int &n)
    {
        for (int i = 1; i < n; ++i)
        {
            int tmp = arr[i];
            int j = i - 1;
            while (j >= 0 && arr[j] > tmp)
            {
                arr[j + 1] = arr[j];
                j--;
            }
            arr[j + 1] = tmp;
        }
    }

    int partition(int arr[], int lb, int ub)
    {
        int pivot = arr[lb], start = lb, end = ub;
        while (start < end)
        {
            while (arr[start] <= pivot)
                start++;
            while (arr[end] > pivot)
                end--;
            if (start < end)
            {
                int tmp = arr[start];
                arr[start] = arr[end];
                arr[end] = tmp;
            }
        }
        int tmp = arr[end];
        arr[end] = arr[lb];
        arr[lb] = tmp;
        return end;
    }

    void quickSort(int arr[], int lb, int ub)
    {
        if (lb < ub)
        {
            int loc = partition(arr, lb, ub);
            quickSort(arr, loc + 1, ub);
            quickSort(arr, lb, loc - 1);
        }
    }

    void printArr(const int arr[], const int &n)
    {
        for (int i = 0; i < n; ++i)
            std::cout << arr[i] << " ";
        std::cout << std::endl;
    }
}

int main()
{
    int arr[] = {5, 9, 3, 2, 4, 10, 6};
    int n = sizeof(arr) / sizeof(arr[0]);
    sort::printArr(arr, n);
    sort::insertionSort(arr, n);
    sort::printArr(arr, n);
    int arr2[] = {5, 9, 3, 2, 4, 10, 6};
    n = sizeof(arr2) / sizeof(arr2[0]);
    sort::printArr(arr2, n);
    sort::quickSort(arr2, 0, n - 1);
    sort::printArr(arr2, n);
}