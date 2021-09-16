#include <string.h>
#include <string.h>

int main()
{
    char text[100];
    char substring[40];
    int i = 0;

    printf("Enter the string to be searched (less than 100 characters: \n");
    scanf("%s", text);

    printf("\n Enter the string to be sought (less than 40 characters):\n");
    scanf("%s", substring);

    for (i=0; (text[i] = (char)toupper(text[i])) != '\0'; i++);
    for (i=0; (substring[i] = (char)toupper(substring[i])) != '\0'; i++);

    printf("The second string %s found in the first.\n", ((strstr(text, substring)== NULL)? "was not" : "was"));

}
 