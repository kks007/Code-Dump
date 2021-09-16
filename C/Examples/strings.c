#include <stdio.h>
#include <string.h>

char notmain();


int main ()
{
    char string1[] = "string first";
    char string2[] = "string second";
    char copy[50];
    
    printf("The length of the string 1 is: %ld \n", strlen(string1));

    strncpy(copy, string1, sizeof(copy) -1);
    printf("The copied string is: %s\n", copy);

    notmain();
    
    printf("Strcmp \"A\" and \"B\" is: ");
    printf("%d \n", strcmp("A", "B"));


    if (strncmp("astronomy", "astro", 5) == 0)
    {
        printf("Found: astronomy");
    }


    return 0;
    
}


char notmain()
{

    char src [50], dest[50];
    
    strcpy(src, "This is source");
    strcpy(dest, "This is destination");

    strncat(dest, src, 15);

    printf("modified string using strncat() %s\n ", dest);

}

