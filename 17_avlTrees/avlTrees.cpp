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

int balanceFactor(struct node *p) {
    int hl, hr;
    hl = p && p->lchild ? p->lchild->height : 0;
    hr = p && p->rchild ? p->rchild->height : 0;
    return hl - hr;
}

struct node *llRotation(struct node *p) {
    struct node *pl = p->lchild;
    struct node *plr = pl->rchild;
    pl->rchild = p;
    p->lchild = plr;
    p->height = nodeHeight(p);
    pl->height = nodeHeight(pl);

    if (root == p)
        root = pl;
    return pl;
}

struct node *rrRotation(struct node *p) {
    node *pr = p->rchild;
    node *prl = pr->lchild;

    pr->lchild = p;
    p->rchild = prl;

    // Update height
    p->height = nodeHeight(p);
    pr->height = nodeHeight(pr);

    // Update root
    if (root == p) {
        root = pr;
    }
    return pr;
}

struct node *lrRotation(struct node *p) {
    struct node *pl = p->lchild;
    struct node *plr = pl->rchild;
    pl->rchild = plr->lchild;
    p->lchild = plr->rchild;
    plr->lchild = pl;
    plr->rchild = p;
    pl->height = nodeHeight(pl);
    p->height = nodeHeight(p);
    plr->height = nodeHeight(plr);
    if (root == p)
        root = plr;
    return plr;
}


struct node *rlRotation(struct node *p) {

    node *pr = p->rchild;
    node *prl = pr->lchild;

    pr->lchild = prl->rchild;
    p->rchild = prl->lchild;

    prl->rchild = pr;
    prl->lchild = p;

    // Update height
    pr->height = nodeHeight(pr);
    p->height = nodeHeight(p);
    prl->height = nodeHeight(prl);

    // Update root
    if (root == p) {
        root = prl;
    }
    return prl;
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

    if (balanceFactor(p) == 2 && balanceFactor(p->lchild) == 1)
        return llRotation(p);
    else if (balanceFactor(p) == 2 && balanceFactor(p->lchild) == -1)
        return lrRotation(p);
    else if (balanceFactor(p) == -2 && balanceFactor(p->rchild) == -1)
        return rrRotation(p);
    else if (balanceFactor(p) == 2 && balanceFactor(p->rchild) == 1)
        return rlRotation(p);

    return p;
}

int main() {
    root = rInsert(root, 50);
    rInsert(root, 10);
    rInsert(root, 20);

    return 0;
}
