#include <stdio.h>
#include <stdlib.h>

struct rectangle
{
    int length;
    int breadth;
};

int main()
{
    struct rectangle r = {10, 5};
    struct rectangle *p = &r;

    r.length = 15;
    (*p).length = 20; // cause of precedence,we have to use brackets
    p -> length = 20; // better method

    struct rectangle *q;

    q = (struct rectangle*) malloc(sizeof(struct rectangle));
    
    q -> length = 10;
    q -> breadth = 5;


}


