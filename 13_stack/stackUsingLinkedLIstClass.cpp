#include "iostream"

using namespace std;

class node {
public:
    int data;
    node *next;
};

class stack {
private:
    node *top;
public:
    stack() {
        top = NULL;
    }

    void push(int x);

    int pop();

    void display();
};

void stack::push(int x) {
    node *t = new node;
    if (t == NULL)
        cout << "stack is FULL";
    else {
        t->data = x;
        t->next = top;
        top = t;
    }

}

int stack::pop() {
    int x = -1;
    if (top == NULL)
        cout << "stack is empty";
    else {
        x = top->data;
        node *t = top;
        top = top->next;
        delete t;
    }
    return x;
}
