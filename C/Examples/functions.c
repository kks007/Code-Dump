#include <stdio.h>
#include <stdlib.h>

int gcd(int u, int v);
float absValue (float x);
float squarert(float y);

int main()
{

    int u,v;
    printf("Enter the numbers you want to find the gcd of:\n");
    scanf("%d %d", &u, &v);
    int result = 0;
    result = gcd(u,v);
    printf("%d is the GCD of %d and %d\n\n", result, u, v);
    
    float absValueInput, absValueResult;
    printf("Enter the number you want to find absolute value of:\n");
    scanf("%f", &absValueInput);
    absValueResult = absValue(absValueInput);
    printf("Absolute value of %.2f is: %.2f\n\n", absValueInput, absValueResult);

    float sqrtInput;
    printf("Enter the number you want to find the square root of:\n");
    scanf("%f", &sqrtInput);
    float sqrtResult = squarert(sqrtInput);
    printf("The square root of %.2f is %.2f\n", sqrtInput, sqrtResult);
}

int gcd(int u, int v)
{
    int temp;
    while (v != 0)
    {
        temp = u % v;
        u = v;
        v = temp;

    }
    return u;
}

float squarert(float y)
{

    const float epsilon = 0.0001;
    float guess = 1.0;
    float returnValue = 0.0;
    
    if(y<0)
    {
        printf("Negative argument to square root\n");
        returnValue = -1.0;
    }

    else
    {
        while (absValue (guess*guess -y) >= epsilon)
        guess= (y / guess + guess ) / 2.0;

        returnValue = guess;
    }

    return guess;
}

float absValue(float x)
{

    if ( x < 0)
    x = -x;
    return x;
}

