#include <iostream>
#include "cstdlib"


class diagonal {
private:
    int *a;
    int n;
public:
    diagonal() {
        n = 3;
        a = new int[2];
    }

    diagonal(int n) {
        this->n = n;
        a = new int[n];
    }

    ~diagonal() {
        delete[]a;
    }

    void set(int i, int j, int x);

    int get(int i, int j);

    void display();
};

void diagonal::set(int i, int j, int x) {
    if (i == j)
        a[i - 1] = x;
}

int diagonal::get(int i, int j) {
    if (i == j)
        return a[i - 1];
    else
        return 0;
}

void diagonal::display() {
    int i, j;
    for (i = 0; i < n; ++i) {
        for (j = 0; j < n; ++j) {
            if (i == j) printf("%d ", a[i - 1]);
            else printf("0 ");
        }
        printf("\n");
    }
}


int main() {

    diagonal d(4);
    d.set( 1, 1, 5);
    d.set( 2, 2, 5);
    d.set( 3, 3, 5);
    d.set( 4, 4, 5);
    d.display();
    printf("%d \n", d.get( 2, 2));

//    std::cout << "Hello, World!" << std::endl;
    return 0;
}
