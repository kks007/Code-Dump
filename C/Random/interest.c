#include <stdio.h>

void main()

{
    float p,r,t;
    float si;
    
    printf("Enter principle (amount): ");
    scanf("%f", &p);

    printf("Enter time: ");
    scanf("%f", &t);

    printf("Enter rate: ");
    scanf("%f", &r);

    si = p*r*t/100;
    printf("Simple interest = %f", si);

}

