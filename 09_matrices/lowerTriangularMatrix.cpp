#include <iostream>
#include "cstdlib"
#include "stdio.h"

struct matrix {
    int *a;
    int n;
};

void set(struct matrix *m, int i, int j, int x) {
    if (i >= j)
        m->a[m->n * (j - 1) + (j + 2) * (j - 1) / 2 + i] = x;

}

int get(struct matrix m, int i, int j) {
    if (i >= j)
        return m.a[m.n * (j - 1) + (j + 2) * (j - 1) / 2 + i];
    else
        return 0;
}

void display(struct matrix m) {
    int i, j;
    for (i = 1; i < m.n; ++i) {
        for (j = 1; j < m.n; ++j) {
            if (i >= j) printf("%d ", m.a[m.n * (j - 1) + (j + 2) * (j - 1) / 2 + i]);
            else printf("0 ");
        }
        printf("\n");
    }
}


int main() {
    struct matrix m;
    int i, j, x;
    printf("Enter dimension ");
    scanf("%d", &m.n);

    m.a = (int *) malloc(m.n * (m.n + 1) / 2 * sizeof(int));
    printf("Enter all elements");
    for (i = 1; i < m.n; ++i) {
        for (j = 1; j < m.n; ++j) {
            scanf("%d", &x);
            set(&m, i, j, x);
        }
    }
    printf("\n\n");
//    printf("%d \n", get(m, 2, 2));

//    std::cout << "Hello, World!" << std::endl;
    return 0;
}
