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
    int n , d;
    scanf("%d%d", &n, &d);
    int arr[n];
    
    for (int i = 0; i < n; i ++)
    {
        scanf("%d", &arr[i]);
    }

    array_left_rotate(arr, d, n);
}

