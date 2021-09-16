#include <stdio.h>
int main ()
{
    int age;
    
    printf("What's your age?\n");
    scanf("%d", &age);

    if (age == 18){
        printf("Lucky person!");
    }
    else if (age < 18){
        printf("Go home kid!");
    }
    else if (age > 18 && age < 40 ){
        printf("The sweet spot, I see!");
    }
    else if (age > 40){
        printf("Sup, Boomer?");
    }
    return 0;
}


