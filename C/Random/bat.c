#include <stdio.h>

int main()
{
    int matrix[3][3] = {};
    
    for(int i = 0; i <3; i++)
    {
        for(int j = 0; j <3; j++)
        {
            printf("Enter element %d, %d: ", i+1, j+1);
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("\n Matrix: \n");

    for(int i = 0; i<3; i++){
        for(int j = 0; j < 3; j++){
            printf("%d ",matrix[i][j]);
        }
        printf("\n");
    }
    return 0;
}
