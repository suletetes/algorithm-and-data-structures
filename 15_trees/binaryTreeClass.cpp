#include <cstdio>
#include <cstdlib>
#include "queueClass.h"


class tree {
    node *root;
public:

    tree() {
        root = NULL;
    }

    void createTree();

    void preOrder(node *p);

    void postOrder(node *p);

    void inOrder(node *p);

    void levelOrder(node *p);

    void height(node *root);
};

void tree::createTree() {
    node *p, *t;
    int x;
    queue q(100);
//    create(&q, 100);

    printf("enter root value ");
    scanf("%d", &x);
    root = new node;
    root->data = x;
    root->lchild = root->rchild = NULL;
    q.enqueue(root);
    while (!q.isEmpty()) {
        p = q.dequeue();
        printf("Enter left child of %d ", p->data);
        scanf("%d", &x);
        if (x != -1) {
            t = new node;
            t->data = x;
            t->lchild = t->rchild = NULL;
            p->lchild = t;
            q.enqueue(t);
        }
        printf("Enter right child of %d ", p->data);
        scanf("%d", &x);
        if (x != -1) {
            t = new node;
            t->data = x;
            t->lchild = t->rchild = NULL;
            p->rchild = t;
            q.enqueue(t);
        }
    }
}


void tree::preOrder(node *p) {
    if (p) {
        printf("%d ", p->data);
        preOrder(p->lchild);
        preOrder(p->rchild);
    }
}

void tree::inOrder(node *p) {
    if (p) {
        inOrder(p->lchild);
        printf("%d ", p->data);
        inOrder(p->rchild);
    }
}

void tree::postOrder(node *p) {
    if (p) {
        postOrder(p->lchild);
        postOrder(p->rchild);
        printf("%d ", p->data);
    }
}

int main() {

    return 0;
}