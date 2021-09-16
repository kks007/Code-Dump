#include <stdio.h>

int linearSearch();
int binarySearch();

int main(void)
{
    int arr[] = { 2, 3, 4, 10, 40 };
    int n = sizeof(arr) / sizeof(arr[0]);
    int x = 10;
    int result = binarySearch(arr, 0, n - 1, x);
    (result == -1) 
        ? printf("Element is not present in array")
        : printf("Element is present at index %d\n", result);

    int resultsecond = linearSearch(arr, n, x);
    (resultsecond == -1)
        ? printf("Element is not present in array")
        : printf("Element is present at index %d\n", resultsecond);
    return 0;
}

int linearSearch(int arr[], int n, int x)
{
    int i;
    for (i = 0; i < n; i++)
        if (arr[i] == x)
            return i;
    return -1;
}

int binarySearch(int arr[], int l, int r, int x)
{
    while (l <= r) 
    {
        int m = l + (r - l) / 2;
  
        if (arr[m] == x)
            return m;

        if (arr[m] < x)
            l = m + 1;
        else
            r = m - 1;
    }
    return -1;
}
