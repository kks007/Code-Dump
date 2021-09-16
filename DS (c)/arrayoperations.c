#include <stdio.h>

void insert_element();
void delete_element();
void print();
int binarySearch();

int array[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
int arraySize = sizeof(array) / sizeof(int);

int main()
{
	int size = arraySize, num;
	int position, element;
	printf("\n\n");
	print(array);
	
	printf("\n\nEnter the number you want to search: ");
    scanf("%d", &num);
    
    (binarySearch(array, 0, size - 1, num) == -1) 
        ? printf("Element is not present in array")
        : printf("Found it at index: %d\n", 
        binarySearch(array, 0, size - 1, num));

	printf("\nEnter the index where you want to insert: ");
	scanf("%d", &position);
	printf("\nEnter the element you want to insert: ");
	scanf("%d", &element);

	insert_element(position, element, array);
	print(array);

	printf("\nEnter the position where you want to delete: ");
	scanf("%d", &position);

	delete_element(position, array);

	printf("\n");
	print(array);
	printf("\n");

	return 0;
}

void insert_element(int position, int element, int * a)
{
	for(int i = arraySize; i < position ; i++)
		a[i] = a[i-1];		
	a[position] = element;
}

void delete_element(int position, int * a)
{
	if (position >= arraySize+1)
      printf("Deletion not possible.\n");

	else
  	{
      for (int i = position - 1; i < arraySize - 1; i++)
         a[i] = a[i+1];
	}
}

void print(int array[])
{
	printf("[");
	for (int i = 0; i < arraySize; i++)
	{
		printf("%d, ", array[i]);
	}
	printf("]");
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
