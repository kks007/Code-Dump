#include <stdio.h>

void check(int n, int x, int k)
{
    for (int i = 0; i <= n+1; i += k)
    {
        if (i == x)
        {
            printf("YES\n");
            return;
        }
        else 
        {
            for (int j = n+1; j <= 0; j-= k)
            {
                if (j == x)
                    printf("YES\n");
                    return;
            }
        }
    }
    printf("NO\n");
}

int main()
{
    int t, n , x, k;

    printf("Enter test cases: ");
    scanf("%d", &t);

    for (int a = 0; a <= t; a++)
    {
        scanf("%d%d%d", &n, &x, &k);
        check(n, x, k);
    }
    return 0;
}
