#include <iostream>
#include "stdio.h"

struct queue {
    int size;
    int front;
    int rear;
    int *q;
};

void create(struct queue *q, int size) {
    q->size = size;
    q->front = q->rear = -1;
    q->q = (int *) malloc(q->size * sizeof(int));
}

void enqueue(struct queue *q, int x) {
    if (q->rear == q->size - 1) {
        printf("queue is full");
    } else {
        q->rear++;
        q[q->rear]=x;
    }
}

int dequeue(struct queue *q) {
    int x = -1;
    if (q->front == q->rear) {
        printf("queue is empty\n");
    } else {
        q->front++;
        x = q->q[q->front];
    }
    return x;
}

void display(struct queue q) {
    for (int i = q.front + 1; i <= q.rear; ++i) {
        printf("%d ", q.q[i]);
    }
    printf("\n");
}

int main() {
    struct queue q;
    create(&q, 5);
    enqueue(&q, 10);
    enqueue(&q, 20);
    enqueue(&q, 30);
    enqueue(&q, 40);
    display(q);
    printf("%d ", dequeue(&q));

    return 0;
}
