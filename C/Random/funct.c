#include <stdio.h>

int global = 7;

void sum (int a , int b)
{
    int ans = a + b;
    printf("%d \n ", ans);
    
}

int main ()
{
    int local;
    sum(6,7);
    sum(5,7);

    return 0;
}
