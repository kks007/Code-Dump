#include <stdio.h>

int sum();

int main()
{
    int size;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &size);
     
    int array[size];

    for (int i = 0; i <size; i++)
    {
        printf("Enter element %d: ", i+1);
        scanf("%d", &array[i]);
    }
    printf("\nSum = %d\n", sum(array, size));
    
}

int sum(int array[], int size)
{
    if (size <= 0)
        return 0;
    return (sum(array, size-1) + array[size-1]);
}