#include <stdio.h>

int string_length(char *p);
void char_search(char *p, char ch);
int vowelCount(char *p);

void main()
{
    char ch, str[20];
    int length;

    printf("\nEnter any string : ");
    gets(str);

    length = string_length(str);
    printf("The length of the given string \"%s\" is : %d", str, length);

    printf("\nEnter a character to search in a string:\n");
    scanf("%c", &ch);
    char_search(str, ch);

    printf("The number of vovles in the string: %d\n", vowelCount(str));
}

int string_length(char *p)
{
    int count = 0;
    while (*p != '\0')
    {
        count++;
        p++;
    }
    return count;
}

void char_search(char *p, char ch)
{
    int count = 0, flag = 0;

    while (*p != '\0')
    {
        if (ch == *p)
        {
            printf("%c character is found at %d location\n", ch, (count + 1));
            flag = 1;
            break;
        }
        p++;
        count++;
    }
    if (flag == 0)
    {
        printf("Character %c is not found in the string\n");
    }
}

int vowelCount(char *p)
{
    int count = 0;
    while ((*p) != '\0') {
  
        if (*p == 'a' || *p == 'e' || *p == 'i'
            || *p == 'o' || *p == 'u') {
  
            count++;
        }

        p++;
    }
  
    return count;
}