#include <stdio.h>

#define SIZE 5

void search(int n, int *a, int m);
void sort(int n, int* ptr);
int sum(int *ptr);

int main()
{

    int values [SIZE] = {1, 5, 4, 3, 2};
    int *valuesPtr;
    valuesPtr = values;

    int element = 0;

    printf("Original Array: ");

    for(int i = 0; i < SIZE; i++){
        printf("%d ", values[i]);
    }

    int arrSum = sum(valuesPtr);
    printf("\nAddnum = %d ", arrSum);
    printf("\nAverage = %d ", arrSum/SIZE);

    printf("\nEnter the element to search: ");
    scanf("%d", &element);

    search(SIZE, valuesPtr, element);
    valuesPtr = values;

    printf("\n Sorted array: ");
    sort(SIZE, valuesPtr);

}

void search(int n,int *a,int m){
    int i, l = 0, pos = 0;
    for(i=0;i<n;i++){
       if(m==a[i]){
         l=1;
         pos = i;
         break;
      }
   }
   if(l==1){
      printf("%d is present in the array at position %d \n",m, pos);
   } else {
      printf("%d is not present in the array",m);
   }
}

void sort(int n, int* ptr)
{
    int i, j, t;
    for (i = 0; i < n; i++) {
        for (j = i + 1; j < n; j++) {
            if (*(ptr + j) < *(ptr + i)) {
  
                t = *(ptr + i);
                *(ptr + i) = *(ptr + j);
                *(ptr + j) = t;
            }
        }
    }
  
    for (i = 0; i < n; i++)
        printf("%d ", *(ptr + i));
}


int sum(int *ptr)
{
	int index, total = 0;
	for (index = 0; index < 5; index++) 
        {
		total += *(ptr + index);
	}
	return(total);
 
}