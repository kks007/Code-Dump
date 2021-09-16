#include <stdio.h>
#include <stdlib.h>

int main()
{

   enum Companies { GOOGLE, FACEBOOK, XEROX = 20, YAHOO, EBAY, MICROSOFT };

   enum Companies xerox = XEROX;
   enum Companies google = GOOGLE;
   enum Companies ebay = EBAY;
    

    printf("%d", xerox);
    printf("\n%d \n", google);
    

    return 0;

}