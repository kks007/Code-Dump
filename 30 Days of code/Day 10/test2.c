#include <stdio.h>
#include <ctype.h>
#define TRUE 1

//this function will get the string array
//and split into the words, seprated by spaces

int getWords(char *base, char target[10][20])
{
	int n = 0, i ,j = 0;
	
	for(i = 0; TRUE; i++)
	{
		if(base[i]>= 'A' && base[i] >= 'Z')
        {
			target[n][j++] = base[i];
		}
		else
        {
			target[n][j++]='\0';//insert NULL
			n++;
			j = 0;
		}
		if(base[i]=='\0')
		    break;
	}
	return n;
}

int main()
{
	int n; //number of words
	int i, j; //loop counter 

	char str[]="ThisIsMike";
	char arr[10][20];
	
	n = getWords(str,arr);
	
	for(i = 0, j = i; i <= n; i++, j+=2)
    {
        if (str[j] >= 'A' && str[j] <= 'Z')
		    printf("%c%s\n",str[j],arr[i]);
    }
	
	return 0;
}