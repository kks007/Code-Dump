#include <stdio.h>

void sol(int n, char peg1, char peg2, char peg3)
{
    if (n==1)
    {
        printf("Disk 1 from peg %c to peg %c\n", peg1, peg2 );
        return;
    }
    sol(n-1, peg1, peg3, peg2);
    printf("Disk %d from peg %c to peg %c\n", n, peg1, peg2);
    sol(n-1, peg3, peg2, peg1);
}

int main()
{
    int n;
    printf("Enter Number of discs: ");
    scanf("%d", &n);
    sol(n, 'A', 'B', 'C');
}
