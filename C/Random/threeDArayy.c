#include <stdio.h>

int main()
{
  int array[3][3][2];

  printf("Enter the values: \n");

  for (int i = 0; i < 3; ++i)
  {
    for (int j = 0; j < 3; ++j)
    {
      for (int k = 0; k < 3; ++k)
      {
          printf("Enter element %d,%d,%d: ", i, j, k);
          scanf("%d", &array[i][j][k]);
      }
    }
  }



  printf("\nDisplaying values:\n");
  for (int i = 0; i < 3; ++i)
  {
    for (int j = 0; j < 3; ++j)
    {
      for (int k = 0; k < 3; ++k)
      {
        printf(" %d ",array[i][j][k]);
      }
      printf("\n");
    }
    printf("\n");
  }

  return 0;
}