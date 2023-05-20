#include <iostream>
#include "cstdlib"

struct matrix {
    int a[10];
    int n;
};

void set(struct matrix *m, int i, int j, int x) {
    if (i == j)
        m->a[i - 1] = x;
}

int get(struct matrix m, int i, int j) {
    if (i == j)
        return m.a[i - 1];
    else
        return 0;
}

void display(struct matrix m) {
    int i, j;
    for (i = 0; i < m.n; ++i) {
        for (j = 0; j < m.n; ++j) {
            if (i == j) printf("%d", m.a[i - 1]);
        }
    }
}


int main() {
    struct matrix m;

    std::cout << "Hello, World!" << std::endl;
    return 0;
}
