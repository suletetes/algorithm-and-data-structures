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
        root = p;
        return;
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

void inOrder(struct node *p) {
    if (p) {
        inOrder(p->lchild);
        printf("%d ", p->data);
        inOrder(p->rchild);
    }
}

struct node *search(int key) {
    struct node *t = root;
    while (t != NULL) {
        if (key == t->data)
            return t;
        else if (key < t->data)
            t = t->lchild;
        else
            t = t->rchild;
    }
    return NULL;
}

// recursiveInsert
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
struct node *Delete(struct node *p, int key){
    if (key < p->data)
        p->lchild = Delete(p->lchild, key);
    else if (key > p->data)
        p->rchild = Delete(p->rchild, key);
    else{

    }
}

int main() {
    struct node *temp;
    root = rInsert(root, 10);
    rInsert(root, 5);
    rInsert(root, 20);
    rInsert(root, 8);
    rInsert(root, 30);
    inOrder(root);
//    insert(10);
//    insert(5);
//    insert(20);
//    insert(8);
//    insert(30);
//    inOrder(root);
//    printf("\n");
    temp = search(20);
    if (temp != NULL)
        printf("\n element %d is found \n", temp->data);
    else
        printf("element os not found \n");
    return 0;
}
