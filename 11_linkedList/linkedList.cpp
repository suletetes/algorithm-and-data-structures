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

int count(struct node *p) {
    int l = 0;
    while (p) {
        l++;
        p = p->next;
    }
    return l;
}

int rCount(struct node *p) {
    if (p != NULL)
        return rCount(p->next) + 1;
    else
        return 0;

}

int sum(struct node *p) {
    int s = 0;
    while (p != NULL) {
        s += p->data;
        p = p->next;
    }
    return s;
}

int rSum(struct node *p) {
    if (p == NULL)
        return 0;
    else
        return rSum(p->next) + p->data;
}

int max(struct node *p) {
    int max = INT32_MIN;
    while (p) {
        if (p->data > max)
            max = p->data;
        p = p->next;
    }
    return max;
}

int rMax(struct node *p) {
    int x = 0;
    if (p == 0)
        return INT32_MIN;
    x = rMax(p->next);
    if (x > p->data)
        return x;
    else
        return p->data;
}

int main() {
    int a[] = {3, 5, 7, 10, 15, 8, 12, 20 ,3};
    create(a, 9);
//    rDisplay(first);
//    printf("Length is %d ", rCount(first));
//    printf("sum is %d \n", sum(first));
    printf("the max number  is %d \n", rMax(first));
    return 0;
}










