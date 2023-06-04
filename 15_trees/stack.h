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

void createStack(struct stack *st, int size) {
//    printf("Enter size");
//    scanf("%d", &st->size);
    st->size = size;
    st->top = -1;
    st->s = (int *) malloc(st->size * sizeof(int));
}

void displayStack(struct stack st) {
    int i;
    for (i = st.top; i >= 0; i--)
        printf("%d ", st.s[i]);
    printf("\n");

}

int pushStack(struct stack *st, int x) {
    if (st->top == st->size - 1)
        printf("stack overflow");
    else {
        st->top++;
        st->s[st->top] = x;
    }
}

int popStack(struct stack *st) {
    int x = -1;
    if (st->top == -1)
        printf("stack underflow\n");
    else {
        x = st->s[st->top--];
    }
    return x;
}

int peekStack(struct stack st, int index) {
    int x = 1;
    if (st.top - index < 0) {
        printf("Invalid index \n");
    }
    x = st.s[st.top - index + 1];
    return x;
}

int isEmptyStack(struct stack st) {
    if (st.top == -1)
        return 1;
    return 0;
}

int isFullStack(struct stack st) {
    return st.top == st.size - 1;
}

int stackTopStack(struct stack st) {
    if (!isEmpty(st))
        return st.s[st.top];
    return -1;
}

#endif // STACK_H_INCLUDED

