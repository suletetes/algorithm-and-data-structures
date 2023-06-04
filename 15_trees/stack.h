//
// Created by suleiman on 04/06/2023.
//
#ifndef INC_15_TREES_STACK_H
#define INC_15_TREES_STACK_H

#include <iostream>
#include <stdio.h>
#include  "stdlib.h"
#include "queue.h"

struct Stack {

    int size;

    int top;

    long int *S;

};


void Stackcreate(struct Stack *st, int size) {

    st->size = size;


    st->top = -1;


    st->S = (long int *) malloc(st->size * sizeof(long int));

}


void push(struct Stack *st, long int x) {

    if (st->top == st->size - 1)

        printf("\nStack Overflow \n");

    else

        st->S[++st->top] = x;

}


long int pop(struct Stack *st) {

    long int x = -1;


    if (st->top == -1)


        printf("\nStack Underflow\n");


    else


        x = st->S[st->top--];


    return x;

}


int isEmptyStack(struct Stack st) {

    if (st.top == -1)

        return 1;

    return 0;

}


int isFull(struct Stack st) {

    return st.top == st.size - 1;

}

void stackDisplay(struct Stack st) {


    int i;


    for (i = st.top; i >= 0; i--)


        printf("%d ", st.S[i]);


    printf("\n");


}

#endif // STACK_H_INCLUDED

