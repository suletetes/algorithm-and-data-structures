#include <stdio.h>
#include <stdlib.h>

struct node {
    struct node *lchild;
    int data;
    int height;
    struct node *rchild;
} *root = NULL;

struct node *rInsert(struct node *p, int key) {
    struct node *t = NULL;
    if (p == NULL) {
        t = (struct node *) malloc(sizeof(struct node));
        t->data = key;
        t->lchild = t->rchild = NULL;
        return t;
    }
    if (key < p->data)
        p->lchild = rInsert(p->lchild, key);
    else if (key > p->data)
        p->rchild = rInsert(p->rchild, key);
    return p;
}

int main() {


    return 0;
}
