#include <stdio.h>

void left_rotate_by_one(int arr[], int n)
{
    int temp = arr[0], i;
    for (i = 0; i < n - 1; i++)
    arr[i] = arr[i + 1];
    arr[i] = temp;
}

void array_left_rotate(int arr[], int d, int n)
{
    for (int i = 0; i < d; i++)
    left_rotate_by_one(arr, n);   

    for (int i = 0; i < n ; i++)
    {
        printf("%d ", arr[i]);
    }
}
int main()
{
    int n = 5, d = 4;    
    int arr[5] = {1,2,3,4,5};
    
    array_left_rotate(arr, d, n);
}
