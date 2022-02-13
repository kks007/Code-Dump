#include <stdio.h>    

#define length 5
     
int main()    
{    
    int arr[length] = {0};     
   
    for(int i = 0; i < length; i++) {
        printf("Enter element no. %d: ", i+1);
        scanf("%d", &arr[i]);
    }
        
    printf("Original array: \n");    
    for (int i = 0; i < length; i++) {     
        printf("%d ", arr[i]);     
    }      
        
    printf("\n");    
        
    printf("Array in reverse order: \n");    
    for (int i = length-1; i >= 0; i--) {     
        printf("%d ", arr[i]);     
    }     
    return 0;    
}    