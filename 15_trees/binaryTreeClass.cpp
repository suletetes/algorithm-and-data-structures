#include <cstdio>
#include <cstdlib>
//#include "stack.h"
#include "queueClass.h"
#include "queue.h"


class tree {

public:
    node *root;

    tree() {
        root = NULL;
    }

    void createTree();

    void preOrder() { preOrder(root); }

    void preOrder(node *p);

    void postOrder(node *p);

    void inOrder() { inOrder(root); }

    void inOrder(node *p);

    void levelOrder(node *p);

    int height(node *root);
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


void tree::preOrder(struct node *p) {
    if (p) {
        printf("%d ", p->data);
        preOrder(p->lchild);
        preOrder(p->rchild);
    }
}

void tree::inOrder(struct node *p) {
    if (p) {
        inOrder(p->lchild);
        printf("%d ", p->data);
        inOrder(p->rchild);
    }
}

void tree::postOrder(struct node *p) {
    if (p) {
        postOrder(p->lchild);
        postOrder(p->rchild);
        printf("%d ", p->data);
    }
}

void tree::levelOrder(struct node *root) {
    queue q(100);

    printf("%d ", root->data);
    q.enqueue(root);

    while (!q.isEmpty()) {
        root = q.dequeue();
        if (root->lchild) {
            printf("%d ", root->lchild->data);
            q.enqueue(root->lchild);
        }
        if (root->rchild) {
            printf("%d ", root->rchild->data);
            q.enqueue(root->rchild);
        }
    }
}

int tree::height(struct node *root) {
    int x = 0, y = 0;
    if (root == 0)
        return 0;
    x = height(root->lchild);
    y = height(root->rchild);
    if (x > y)
        return x + 1;
    else
        return y + 1;

}

//void iPreOrder(struct node *p) { #todo 292
//    struct stack stk;
//    createStack(&stk, 100);
//    while (p || !isEmptyStack(stk)) {
//        if (p) {
//            printf("%d ", p->data);
//            pushStack(&stk, p);
//            p = p->lchild;
//        } else {
//            p = popStack(&stk);
//            p = p->rchild;
//        }
//    }
//
//}

void levelOrder(struct Node *root) {
    struct Queue q;
    create(&q, 100);
    printf("%d ", root->data);
    enqueue(&q, root);

    while (!isEmpty(q)) {
        root = dequeue(&q);
        if (root->lchild) {
            printf("%d ", root->lchild->data);
            enqueue(&q, root->lchild);
        }
        if (root->rchild) {
            printf("%d ", root->rchild->data);
            enqueue(&q, root->rchild);
        }
    }
}

int count(struct node *root) {
    if (root) {
        return count(root->lchild) + count(root->rchild) + 1;
    }
    return 0;
}

int height(struct node *root) {
    int x = 0, y = 0;
    if (root)
        return 0;
    x = height(root->lchild);
    x = height(root->rchild);
    if (x > y)
        return x + 1;
    else
        return y + 1;
}

int main() {
    tree t;
    t.createTree();

//    printf("count %d ", count(t)); #todo 298
//    printf("PreOrder ");
//    t.preOrder();
//    printf("InOrder ");
//    t.inOrder();
//    t.levelOrder();
    return 0;
}