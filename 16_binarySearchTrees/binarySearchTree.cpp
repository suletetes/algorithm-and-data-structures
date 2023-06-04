#include <stdio.h>
#include <stdlib.h>

struct node {
    struct node *lchild;
    int data;
    struct node *rchild;
} *root = NULL;

void insert(int key) {
    struct node *t = root;
    struct node *r, *p;
    if (root == NULL) {
        p = (struct node *) malloc(sizeof(struct node));
        p->data = key;
        p->lchild = p->rchild = NULL;
    }
    while (t != NULL) {
        r = t;
        if (key < t->data)
            t = t->lchild;
        else if (key > t->data)
            t = t->rchild;
        else
            return;
    }
    p = (struct node *) malloc(sizeof(struct node));
    p->data = key;
    p->lchild = p->rchild = NULL;

    if (key < r->data)
        r->lchild = p;
    else
        r->rchild = p;
}

int main() {
    return 0;
}
