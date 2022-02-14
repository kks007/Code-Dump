#include<stdio.h>

#define length 5

void reverseArray(int arr[], int start, int end)
{
	int temp;
	while (start < end)
	{
		temp = arr[start];
		arr[start] = arr[end];
		arr[end] = temp;
		start++;
		end--;
	}
}	


int main()
{
	int arr[length] = {1, 2, 3, 4, 5};
	printArray(arr, length);
	reverseArray(arr, 0, length-1);
	return 0;
}