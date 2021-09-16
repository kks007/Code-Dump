#include <stdio.h>

int josephus();

void main()
{
    int n = 0, k = 0;
    printf("Enter N: ");
    scanf("%d", &n);
    printf("Enter K: ");
    scanf("%d", &k);

    printf("%d", josephus(n,k));
}

int josephus(int n, int k)
{
    if (n == 1)
        return 1;
    else
        return(josephus(n -1 , k) + k - 1) % n + 1;
}

