//
// Created by suleiman on 04/06/2023.
//
#ifndef INC_15_TREES_STACK_H
#define INC_15_TREES_STACK_H

#include <iostream>
#include <stdio.h>
#include  "stdlib.h"
#include "queue.h"

struct stack {
    int size;
    int top;
    int *s;
};

void create(struct stack *st) {
    printf("Enter size");
    scanf("%d", &st->size);
    st->top = -1;
    st->s = (int *) malloc(st->size * sizeof(int));
}

void display(struct stack st) {
    int i;
    for (i = st.top; i >= 0; i--)
        printf("%d ", st.s[i]);
    printf("\n");

}

int push(struct stack *st, int x) {
    if (st->top == st->size - 1)
        printf("stack overflow");
    else {
        st->top++;
        st->s[st->top] = x;
    }
}

int pop(struct stack *st) {
    int x = -1;
    if (st->top == -1)
        printf("stack underflow\n");
    else {
        x = st->s[st->top--];
    }
    return x;
}

int peek(struct stack st, int index) {
    int x = 1;
    if (st.top - index < 0) {
        printf("Invalid index \n");
    }
    x = st.s[st.top - index + 1];
    return x;
}

int isEmpty(struct stack st) {
    if (st.top == -1)
        return 1;
    return 0;
}

int isFull(struct stack st) {
    return st.top == st.size - 1;
}

int stackTop(struct stack st) {
    if (!isEmpty(st))
        return st.s[st.top];
    return -1;
}
#endif // STACK_H_INCLUDED

