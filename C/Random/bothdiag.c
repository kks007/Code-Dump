#include <stdio.h>
 
#define MAX 100
 
// Function to print the Principal Diagonal
void printPrincipalDiagonal(int mat[][MAX], int n)
{
    printf("Principal Diagonal: ");
 
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == j)
            printf("%d, ", mat[i][j]);
        }
    }
    printf(" \n");
}

void printSecondaryDiagonal(int mat[][MAX], int n)
{
    printf("Secondary Diagonal: "); 
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if ((i + j) == (n - 1))
            printf("%d, ", mat[i][j]);
        }
    }
    printf(" \n");
}
 
int main()
{
    int n = 4;
    int a[][MAX] = { { 1, 2, 3, 4 },
                     { 5, 6, 7, 8 },
                     { 1, 2, 3, 4 },
                     { 5, 6, 7, 8 } };
 
    printPrincipalDiagonal(a, n);
    printSecondaryDiagonal(a, n);
    return 0;
}