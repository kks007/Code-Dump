#include <stdio.h>

int sum (int array1[], int array2[], int counter, int size, int summed[])
{
    if (counter != size)
    {
        summed[counter] = array1[counter] + array2[counter];
        printf("%d, ", summed[counter]);
        sum(array1, array2, counter+1, size, summed);
    }
}

void swap(int *xp, int *yp) 
{ 
    int temp = *xp; 
    *xp = *yp; 
    *yp = temp; 
} 
  
void bubbleSort(int arr[], int n) 
{ 
    for (int i = 0; i < n-1; i++)     
      
    for (int j = 0; j < n-i-1; j++) 
        if (arr[j] > arr[j+1]) 
            swap(&arr[j], &arr[j+1]); 
} 
  

int main()
{

}