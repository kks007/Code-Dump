#include <stdio.h>

int main (){

    float l;
    float b;
   
    printf("Enter length:");
    scanf("%.3f", &l);
    printf("Enter breadth:");
    scanf("%.3f", &b);


    float area = l * b;

    printf("%.3f", area);
    
    return 0;

}