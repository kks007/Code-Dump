#include <stdio.h>


int checkF(int n, int x, int k)
{
    for (int i = 0; i <= n+1; i += k)
    {
        if (i == x)
           return 1; 
    }
    return 0;
}

int checkB(int n, int x, int k)
{
    for (int j = n+1; j <= 0; j-= k)
    {
        if (j == x)
            return 1;
    }
    return 0;
}

void check(int n, int x, int k)
{
    if(checkF(n,x,k) == 1)
        printf("YES\n");
    else if(checkB(n,x,k) == 1)
        printf("YES\n");
    else
        printf("N0\n");
}

int main()
{
    int t, n , x, k;

    printf("Enter test cases: ");
    scanf("%d", &t);

    for (int a = 0; a < t; a++)
    {
        scanf("%d%d%d", &n, &x, &k);
        check(n, x, k);
    }
    return 0;
}