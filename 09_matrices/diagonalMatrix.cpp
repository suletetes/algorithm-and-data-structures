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
            if (i == j) printf("%d ", m.a[i - 1]);
            else printf("0 ");
        }
        printf("\n");
    }
}


int main() {
    struct matrix m;
    m.n = 4;
    set(&m, 1, 1, 5);
    set(&m, 2, 2, 5);
    set(&m, 3, 3, 5);
    set(&m, 4, 4, 5);
    display(m);
    printf("%d \n", get(m, 2, 2));

//    std::cout << "Hello, World!" << std::endl;
    return 0;
}
