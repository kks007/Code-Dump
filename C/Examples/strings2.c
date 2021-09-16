#include <stdio.h>
#include <string.h>

int main()
{
    char str[] = "the quick brown fox";
    char ch = "q";
    char *charFound = NULL;
    charFound = strchr(str, ch); //finding char in string

    //finding string in string

    char text[] = "Every dog had it's day";
    char word[] = "dog";
    char *strFound = NULL ;
    strFound = strstr(text, word);

    //tokenising a string
    // token is a swquence of characters within a stirng that is bound
    //by a delimiter

    //breaking a senrence into words is called tokenising

    char string [80] = "Hello how are you - my name is - jason";
    const char s[2] = "-";
    char *token;

    /* get the first token*/

    token = strtok(string, s);

    /*walk through other tokens*/

    while ( token != NULL )
    {
        printf("%s\n", token);
        token = strtok(NULL,s);
    }

    return 0;

}