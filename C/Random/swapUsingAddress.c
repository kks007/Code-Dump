#include <stdio.h>

void swapUsingAddress(int *m, int *n);
 
void main()
{
    int a,b;
    
    printf("Enter a: ");
    scanf("%d", &a);
    printf("Enter b: ");
    scanf("%d", &b);
    
    swapUsingAddress(&a, &b); 
    
    printf("After swapping: a = %d, b = %d \n", a,b);
 
}

void swapUsingAddress(int *m, int *n){
    int temp= *m;
    *m=*n;
    *n=temp;
}