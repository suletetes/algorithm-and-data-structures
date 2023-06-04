//
// Created by suleiman on 04/06/2023.
//
#include "stdio.h"
#include "stdlib.h"
#ifndef INC_15_TREES_STACK_H
#define INC_15_TREES_STACK_H
struct stack
{
    long int sdata; //stack Data , Stores the address of each node. It's in long int format beacuse we need to store negative address.
    struct stack *next;
} *top = NULL;

void push(long int x)
{
    struct stack *t;
    t = (struct stack *)malloc(sizeof(struct stack));
    if (top == NULL)
    {
        t->sdata = x;
        t->next = NULL;
        top = t;
    }
    else
    {
        t->sdata = x;
        t->next = top;
        top = t;
    }
}
//Returns the address of a node of tree
long int pop()
{
    long int x;
    struct stack *t;
    x =top->sdata;
    t = top->next;
    free(top);
    top = t;
    return x; //Returns the address of Node
}

int isStackEmpty()
{
    return top == NULL;
}
#endif //INC_15_TREES_STACK_H
