#include <stdio.h>
 
int main()
{
    int a = 123456, b = 123;
 
    printf("While printing ");
    printf(", the value returned by printf() is : %d", printf("%d", a));

    printf("\nEnter a number: ");
    int result1 = scanf("%d", a);
    printf("Scanf funciton with one input returns: %d", result1);

    printf("\nEnter two numbers: ");
    int result2 = scanf("%d%d", a,b);
    printf("\nScanf funciton with two inputs returns:%d%d", result2);
 

}