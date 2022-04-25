#include <bits/stdc++.h>
using namespace std;

int main()
{

    int a = 10;
    int *aptr;
    aptr = &a;

    cout << &a << endl;
    cout << aptr << endl; // both will print add. of a

    cout << *aptr << endl; // dereferencing

    *aptr = 20;
    cout << a << endl;

    int arr[] = {10,20,30};
    cout << *arr << endl;
    int *ptr = arr;
    for(int i = 0; i<3; i++){
        cout << *ptr << endl;
        ptr++;
    }
    



    return 0;

}