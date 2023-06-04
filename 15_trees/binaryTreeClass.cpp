#include <cstdio>
#include <cstdlib>
#include "queueClass.h"


class tree {
public:
    node *root;

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

void tree::createTree() {}() {
    Node *root;
    int x;
    queue q(100);
//    create(&q, 100);

    printf("enter root value ");
    scanf("%d", &x);
    root = new Node;
    root->data = x;
    root->lchild = root->rchild = NULL;
    q.enqueue(&q, root);
    while (!q.isEmpty()) {
        p = q.dequeue();
        printf("Enter left child of %d ", p->data);
        scanf("%d", &x);
        if (x != -1) {
            t = new  Node;
            t->data = x;
            t->lchild = t->rchild = NULL;
            p->lchild = t;
            q.enqueue(t);
        }
        printf("Enter right child of %d ", p->data);
        scanf("%d", &x);
        if (x != -1) {
            t = new Node;
            t->data = x;
            t->lchild = t->rchild = NULL;
            p->rchild = t;
            q.enqueue( t);
        }
    }
}


int main() {

    return 0;
}