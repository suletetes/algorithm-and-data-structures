//
// Created by suleiman on 04/06/2023.
//

#ifndef INC_15_TREES_QUEUECLASS_H
#define INC_15_TREES_QUEUECLASS_H

#include "iostream"

using namespace std;

class node {
public:
    node *lchild;
    int data;
    node *rchild;
};

class queue {
private:
    int front;
    int rear;
    int size;
    node **q;
public:
    queue() {
        front = rear = -1;
        size = 10;
        q = new node*[size];
    }

    queue(int size) {
        front = rear = -1;
        this->size = size;
        q = new node*[this->size];
    }

    node* dequeue();

    void enqueue(node *x);

    void display();
};

void queue::enqueue(node *x) {
    if (rear == size - 1) {
        printf("queue is full");
    } else {
        rear++;
        q[rear] = x;
    }
}

node* queue::dequeue() {
    node* x = NULL;
    if (front == rear) {
        printf("queue is empty");
    } else {
        x = q[front + 1];
        front++;
    }
    return x;
}

void queue::display() {
    for (int i = front + 1; i <= rear; ++i) {
        printf("%d ", q[i]);
    }
    printf("\n");
}

#endif //INC_15_TREES_QUEUECLASS_H
