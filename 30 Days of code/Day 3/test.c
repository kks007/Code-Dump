#include <stdio.h>

int prime(int num)
{
    if (num <= 1)
        return 0;
    
    for(int i=2; i<num; i++)
    {
        if (num %i == 0)
            return 0;

    }
    return 1;
}

int main()
{
    int rows, num;
    printf("Enter the number of rows: ");
    scanf("%d", &rows);\

    for(int i = 0; i< rows; i++)
    {
        for ( int j = 0; j<= i; j++)
        {
            int j =  num;
           if(prime(num) == 1)
                printf("# ");
           else
                printf("* ");

        }

        printf("\n");
    }

}

