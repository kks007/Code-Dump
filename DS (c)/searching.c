#include <stdio.h>

int linearSearch();
int binarySearch();

int main(void)
{
    int size, num;
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    int array[size];
    printf("Enter the elements with spaces: ");

    for(int i = 0; i < size; i++)
    {
        scanf("%d", &array[i]);
    }
    
    printf("Enter the number you want to search: ");
    scanf("%d", &num);
    
    (binarySearch(array, 0, size - 1, num) == -1) 
        ? printf("Element is not present in array")
        : printf("Found it at element number: %d\n", 
        binarySearch(array, 0, size - 1, num)+1);

    (linearSearch(array, size, num) == -1)
        ? printf("Element is not present in array")
        : printf("Found it at element number: %d\n",
        linearSearch(array, size, num)+1);

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

int binarySearch(int arr[], int lower, int high, int key)
{
    while (lower <= high) 
    {
        int mid = lower + (high - lower) / 2;
  
        if (arr[mid] == key)
            return mid;

        if (arr[mid] < key)
            lower = mid + 1;
        else
            high = mid - 1;
    }
    return -1;
}
