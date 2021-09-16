#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node * link;
};

int main ()
{
    struct node * head = NULL;
    struct node * second = NULL;
    struct node * third = NULL;

    head = (struct node*) malloc(sizeof(struct node));
    second = (struct node*) malloc(sizeof(struct node));
    third = (struct node*) malloc(sizeof(struct node));

    head -> data = 1;
    head -> link = second;
    second -> data = 2;
    second -> link = third;
    third -> data = 3;
    third -> link = NULL;

    return 0;

}