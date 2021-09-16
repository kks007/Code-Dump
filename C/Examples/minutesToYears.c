#include<stdio.h>

int main ()
{
   int minutes;
   float years;
   float days;
   float minutes_in_years = 525600;
   float days_in_years = 365;
   
   printf("Enter the number of minutes \n");
   scanf("%d", &minutes );

    years = minutes / minutes_in_years;
    days = years * days_in_years;

   printf("That is %f years", years);
   printf("\nThat is %f days", days);

    return 0;
}