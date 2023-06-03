#include "stdio.h"
#include "stdlib.h"
#include "queue.h"

struct Node *root = NULL;

void treeCreate() {
    struct Node *p, *t;
    int x;
    struct Queue q;
    create(&q, 100);

    printf("enter root value ");
    scanf("%d", &x);
    root = (struct Node *) malloc(sizeof(struct Node));
    root->data = x;
    root->lchild = root->rchild = NULL;
    enqueue(&q, root);
    while (!isEmpty(q)) {
        p = dequeue(&q);
        printf("Enter left child of %d ", p->data);
        scanf("%d", &x);
        if (x != -1) {
            t = (struct Node *) malloc(sizeof(struct Node));
            t->data = x;
            t->lchild = t->rchild = NULL;
            p->lchild = t;
            enqueue(&q, t);
        }
        printf("Enter right child of %d ", p->data);
        scanf("%d", &x);
        if (x != -1) {
            t = (struct Node *) malloc(sizeof(struct Node));
            t->data = x;
            t->lchild = t->rchild = NULL;
            p->rchild = t;
            enqueue(&q, t);
        }
    }
}

void preOrder(struct Node *p){
    if (p){
        printf("%d ", p->data);
        preOrder(p->lchild);
        preOrder(p->rchild);
    }
}
int main() {
    treeCreate();
    preOrder(root);

    return 0;
}