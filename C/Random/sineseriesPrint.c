#include <stdio.h>

int main()
{
    int power = 1, n = 5;
    for(int i = 0; i < n; i++)
    {
        printf("x^%d/%d! - ", power, power);
        power = power + 2;
        printf("x^%d/%d! + ", power, power);
        power = power + 2;
    }
}
