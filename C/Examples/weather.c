#include <stdio.h>
#include <stdlib.h>

#define MONTHS 12
#define YEARS 5

int main () {

    float rain[YEARS] [MONTHS]=
    {
        {1,2,3,4,5,6,7,8,9,10,11,12},
        {1,2,3,4,5,6,7,8,9,10,11,12},
        {1,2,3,4,5,6,7,8,9,10,11,12},
        {1,2,3,4,5,6,7,8,9,10,11,12},
        {1,2,3,4,5,6,7,8,9,10,11,12}

    };

    int year, month;
    float subtotal, total;

    printf("YEAR \t\t RAINFALL (inches)\n");
    

    for (year= 0, total = 0; year < YEARS; year++)
    {
        for (month = 0, subtotal = 0; month< MONTHS; month++)
        {
            subtotal += rain[year][month];
        }

        printf("%5d\t\t %15.1f \n", 2010+ year, subtotal);
        total += subtotal;

    }

    printf("\n The yearly average is %.1f inches. \n\n",total/YEARS);
    printf(" Jan  Feb  Mar  Apr  May  Jun  Jul  Aug  Sep  Oct  Nov  Dec\n");

    for (month= 0;  month<MONTHS; month++)
    {
        for (year = 0, subtotal = 0 ; year < YEARS; year++)
        {
            subtotal += rain [year][month];
        }
        printf("%4.1f ", subtotal/YEARS);
    }

    printf("\n");

    return 0;
}
