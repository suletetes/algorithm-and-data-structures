#include <stdio.h>
#include <stdlib.h>

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
    if ((q->rear + 1) % q->size == q->size - 1)
        printf("queue is Full");
    else {
        q->rear = (q->rear + 1) % q->size;
        q->q[q->rear] = x;
    }
}

int dequeue(struct queue *q) {
    int x = -1;

    if (q->front == q->rear)
        printf("queue is Empty\n");
    else {
        q->front = (q->front + 1) % q->size;
        x = q->q[q->front];
    }
    return x;
}

void display(struct queue q) {

    int i = q.front + 1;
    do {
        printf("%d ", q.q[i]);
        i = (i + 1) % q.size;
    } while (i != (q.rear + 1) % q.size);

    printf("\n");
}

int main() {
    struct queue q;
    create(&q, 5);

    enqueue(&q, 10);
    enqueue(&q, 20);
    enqueue(&q, 30);
    display(q);

    printf("%d ", dequeue(&q));
    return 0;
}