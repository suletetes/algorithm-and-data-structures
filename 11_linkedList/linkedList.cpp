#include <iostream>
#include "cstdlib"

struct node {
    int data;
    struct node *next;
} *first = NULL;

void create(int a[], int n) {
    int i;
    struct node *t, *last;
    first = (struct node *) malloc(sizeof(struct node));
    first->data = a[0];
    first->next = NULL;
    last = first;
    for (i = 1; i < n; ++i) {
        t = (struct node *) malloc(sizeof(struct node));
        t->data = a[i];
        t->next = NULL;
        last->next = t;
        last = t;
    }
}

void display(struct node *p) {
    while (p != NULL) {
        printf("%d ", p->data);
        p = p->next;
    }
}

void rDisplay(struct node *p) {
    if (p != NULL) {
        rDisplay(p->next);
        printf("%d ", p->data);
    }
}

int main() {
    int a[] = {3, 5, 7, 10, 15};
    rDisplay(first);
    create(a, 5);
    return 0;
}
