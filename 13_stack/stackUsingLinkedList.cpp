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
    }else {
        t->data = x;
        t->next = top;
        top = t;
    }
}

int main() {
    return 0;
}