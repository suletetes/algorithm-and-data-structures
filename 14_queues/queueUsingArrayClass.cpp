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

int main() {

    return 0;
}
