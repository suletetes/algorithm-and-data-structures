//
// Created by suleiman on 04/06/2023.
//

#ifndef INC_15_TREES_QUEUECLASS_H
#define INC_15_TREES_QUEUECLASS_H
#include "iostream"

using namespace std;


class queue {
private:
    int front;
    int rear;
    int size;
    int *q;
public:
    queue() {
        front = rear = -1;
        size = 10;
        q = new int[size];
    }

    queue(int size) {
        front = rear = -1;
        this->size = size;
        q = new int[this->size];
    }

    int dequeue();

    void enqueue(int x);

    void display();
};

void queue::enqueue(int x) {
    if (rear == size - 1) {
        printf("queue is full");
    } else {
        rear++;
        q[rear] = x;
    }
}

int queue::dequeue() {
    int x = -1;
    if (front == rear) {
        printf("queue is empty");
    } else {
        x = q[front + 1];
        front++;
    }
    return x;
}

void queue::display() {
    for (int i = front+1; i <= rear;  ++i) {
        printf("%d ", q[i]);
    }
    printf("\n");
}

int main() {

    queue q(5);
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.enqueue(40);
    q.display();
    return 0;
}

#endif //INC_15_TREES_QUEUECLASS_H
