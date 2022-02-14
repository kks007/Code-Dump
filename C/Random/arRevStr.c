#include <stdio.h>
#include <string.h>
#include <conio.h>

#define length 5

void PrintArr(char* arr[], int n);
void RevArr(char* arr[], int n);

void main()
{
    clrscr();
    char* arr[] = { "Emerald", "Ivory", "Jasper", "Ruby", "Garnet"};
  
    PrintArr(arr, length);
    printf("\n");
    RevArr(arr, length);
    printf("Revesed Order: ");
    PrintArr(arr, length);
    
    getch();
}

void PrintArr(char* arr[], int n)
{
    for (int i = 0; i < n; i++) {
        printf("%s ", arr[i]);
    }
}

void RevArr(char* arr[], int n)
{
    char* temp;
  
    int j = n - 1;
    for (int i = 0; i < j; i++) {
        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        j--;
    }
}