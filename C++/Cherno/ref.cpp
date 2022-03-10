#include <iostream>
int main()
{
    int a = 5;
    int& ref = a; //referencing 
    ref = 2; 
    std::cout<<a;

}