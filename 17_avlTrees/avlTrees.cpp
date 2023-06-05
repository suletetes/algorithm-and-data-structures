#include <stdio.h>
#include <stdlib.h>

struct node {
    struct node *lchild;
    int data;
    int height;
    struct node *rchild;
} *root = NULL;

int nodeHeight(struct node *p) {
    int hl, hr;
    hl = p && p->lchild ? p->lchild->height : 0;
    hr = p && p->rchild ? p->rchild->height : 0;
    return hl > hr ? hl + 1 : hr + 1;
}

struct node *rInsert(struct node *p, int key) {
    struct node *t = NULL;
    if (p == NULL) {
        t = (struct node *) malloc(sizeof(struct node));
        t->data = key;
        t->height = 1;
        t->lchild = t->rchild = NULL;
        return t;
    }
    if (key < p->data)
        p->lchild = rInsert(p->lchild, key);
    else if (key > p->data)
        p->rchild = rInsert(p->rchild, key);
    p->height = nodeHeight(p);
    return p;
}

int main() {


    return 0;
}
