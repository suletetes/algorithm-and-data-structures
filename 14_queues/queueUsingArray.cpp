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


int main() {
    struct queue q;
    create(&q, 5);
    return 0;
}
