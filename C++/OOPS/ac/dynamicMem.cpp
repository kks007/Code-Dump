#include <bits/stdc++.h>
using namespace std;

int main(){
    int a = 10; // stored in stack

    int *p = new int(); // allocate in heap
    *p = 10;
    delete(p); // deallocate memory

    // after deleting, pointer becomes dangling

    // you could either, 1. reallocate it, 2. delete it

    p = new int[4]; // allocating mem for array, and assiging pointer to it

    delete[]p; // deallocating
    p = NULL; // not dangling anymore
    return 0;
}