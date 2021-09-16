#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
   /* //allocating with malloc

    //int *pNum = (int*)malloc(100);

    int *pNum = (int*)malloc(25*sizeof(int)); //better / safer way

    if(!pNum)
    {
        //code to deal with memory allocation failure (exit)
    }

    //releasing memory
    free(pNum);
    pNum = NULL;

    //allocating with calloc

    int *pNum1 = (int*)calloc(75, sizeof(int)); 
    // unlike malloc all ints are initialised to 0 */

    //realloc 

    char *str = NULL;

    //initial allocation

    str = (char*)malloc(15);
    strcpy(str, "Kaushal");
    printf("String = %s, Address = %u \n", str, str);

    //reallocating memory
    str = (char*)realloc(str, 25);
    strcat(str, " Kishor Sharma");
    printf("String = %s, Address = %u \n", str, str);

    //releasing memory

    free(str);
    
    return 0;

}