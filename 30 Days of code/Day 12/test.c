#include <stdio.h>
#include <string.h>
#include <ctype.h>


int main ()
{
    int n, m;
    char string[] = {};

    printf("Enter the value of n(string chatacters): ");
    scanf("%d", &n);
    printf("\nEnter the value of m (operations): ");
    scanf("%d", &m);
    printf("\nEnter the string: ");
    scanf("%s", string);
    printf("\nEnter operations (with spaces): ");
    
    while (n > 0)
    {
        int num, k, x;
        scanf("%d, %d, %d", &num, &k, &x);

        if (num == 1)
        {
            for (int i = 0; i < n; i++)
            {
                if (string[i] == string[k])
                    string[i] = 'X';
            }
            printf("%s", string);
        }

        else if (num == 2)
        {
            int palindrome = 0;
            while (k < x)
            {
                if (string[k] == string[x])
                {
                    k++;
                    x--;
                }

                else
                {
                    palindrome = 1;
                    break;
                }
            }
            if ( palindrome == 0)
                printf("\n Yes \n");
            else
                printf("\n No \n");
        }

        n--;
    }
    return 0;
}