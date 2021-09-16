#include <stdio.h>

int main()

{
    int i = 0;
    int x = 0;
    char greeting = 'A';
    char freek = 'b';

    for(i = 0; i <= 9; i = i+1)
    {
        printf("hello\n");
    }
    
    printf("%c\n%c\n%d\n", greeting, freek,i);

    while (x <= 10)
    {
        printf("x is less than 10\n");
        x = x + 1;
    }
}