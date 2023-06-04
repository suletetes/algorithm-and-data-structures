#include "stdio.h"
#include "stdlib.h"
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
};


int main() {

    return 0;
}