#include <stdio.h>
#include <conio.h>
#include <string.h>
void main()
{
    char c[10][20];
    int i, j, n = 10, flag = 0, pos;

    for (i = 0; i <= n; i++)
    {
        printf("Enter name %d: ", i);
        gets(c[i]);
    }

    for (i = 0; i <= n; i++)
    {
        if (strcmp(c[i], "Neha") == 0)
        {
            flag = 1;
            pos = i;            
        }
    }
    if (flag == 1)
        printf("Found at position: %d \n", pos);
    else
        printf("Not found");
}
