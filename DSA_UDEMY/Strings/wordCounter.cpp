#include <iostream>
using namespace std;

int main()
{

    char A[] = "this is a sentence";
    int i, word = 1;
    
    for(int i = 0; A[i] != '\0'; i++)
    {
        if(A[i] == ' ' && A[i-1] != ' ')
            word++;
    }
    cout << word ;
}

