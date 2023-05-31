#include "stdio.h"
#include "stdlib.h"

struct node {
    int data;
    struct node *next;
} *top = NULL;

void push(int x) {
    struct node *t;
    t = (struct node *) malloc(sizeof(struct node));
    if (t == NULL) {
        printf("stack is full\n");
    } else {
        t->data = x;
        t->next = top;
        top = t;
    }
}

int pop() {
    struct node *t;
    int x = -1;
    if (top == NULL) {
        printf("Stack is empty\n");
    } else {
        t = top;
        top = top->next;
        x = t->data;
        free(t);
    }
    return x;
}

void display() {
    struct node *p;
    p = top;
    while (p != NULL) {
        printf("%d ", p->data);
        p = p->next;
    }
    printf("\n");
}

int isBalanced(char *exp) {
    int i;
    for (i = 0; exp[i] != '\0'; ++i) {
        if (exp[i] == '(')
            push(exp[i]);
        else if (exp[i] == ')') {
            if (top == NULL)
                return 0;
            pop();
        }
    }
    if (top == NULL)
        return 1;
    else
        return 0;
}

int isOperand(char x) {
    if (x == '+' || x == '-' || x == '*' || x == '/')
        return 0;
    else
        return 1;

}

int eval(char *postFix) {
    int i = 0;
    int x1, x2, r;
    for (i = 0; postFix[i] != '\0'; ++i) {
        if (isOperand(postFix[i]))
            push(postFix[i] - '0');
        else {
            x2 = pop();
            x1 = pop();
            switch (postFix[i]) {
                case '+':
                    r = x1 + x2;
                    break;
                case '-':
                    r = x1 - x2;
                    break;
                case '*':
                    r = x1 * x2;
                    break;
                case '/':
                    r = x1 / x2;
                    break;
            }
            push(r);
        }
    }
    return top->data;
}

int main() {
    char *postFix = "234*+82/-";
    printf("result is %d\n", eval(postFix));

    return 0;
}