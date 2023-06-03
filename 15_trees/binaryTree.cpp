#include "stdio.h"
#include "stdlib.h"

struct node *root = NULL;

void create() {
    struct node *p, *t;
    int x;
    struct queue q;
    create(&q, 100);

    printf("enter root value ");
    scanf("%d", &x);
    root = (struct node *) malloc(sizeof(struct node));
    root->data = x;
    root->lchild = root->rchild = NULL;
    enqueue(&q, root);
    while (!isEmpty(q)) {
        p = dequeue(&q);
        printf("Enter left child ");
        scanf("%d", &x);
        if (x != -1) {
            t = (struct node *) malloc(sizeof(struct node));
            t->data = x;
            t->lchild = t->rchild = NULL;
            p->lchild = t;
            enqueue(&q, t);
        }
        printf("Enter right child ");
        scanf("%d", &x);
        if (x != -1) {
            t = (struct node *) malloc(sizeof(struct node));
            t->data = x;
            t->lchild = t->rchild = NULL;
            p->rchild = t;
            enqueue(&q, t);
        }
    }
}


int main() {


}