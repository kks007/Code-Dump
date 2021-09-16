#include <stdio.h>
#include <string.h>


int main(){

    char buf[100];
    int nLetters = 0;
    int nDigits = 0;
    int nPunct = 0;

    printf("Enter a sting of less than 100 characters (don't use spaces):\n");
    scanf("%s", buf);

    int i = 0;

    while (buf[i])
    {
        if (isalpha(buf[i]))
        nLetters++;
        else if (isdigit(buf[i]))
        nDigits++;
        else if (ispunct(buf[i]))
        nPunct++;

        i++;
    }

    printf("\n Your sting contained %d letters, %d digits and %d punctuations\n", nLetters, nDigits, nPunct);
    return 0;

}