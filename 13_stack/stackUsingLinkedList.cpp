#include "stdio.h"
#include "stdlib.h"

struct node {
    int data;
    struct node *next;
} top = NULL;

void push(int x) {
    struct node *t;
    t = (struct node *) malloc(sizeof(struct node));
    if (t == NULL) {
        printf("stack is full\n");
    } else {
        t->data = x;
        t->next = top;
        top = t;
    }
}

int pop() {
    struct node *t;
    int x = -1;
    if (top == NULL) {
        printf("Stack is empty\n");
    } else {
        t = top;
        top = top.next;
        x = t->data;
        free(t);
    }
}

int main() {
    return 0;
}