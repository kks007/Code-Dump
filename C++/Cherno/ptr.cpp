#include <iostream>
int main()
{
    int *ptr = NULL;
    void *ptr1 = nullptr;
    int var = 8;
    ptr = &var;
    *ptr = 10;
    std::cout<< *ptr;

}