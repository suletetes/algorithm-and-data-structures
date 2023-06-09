#include <iostream>
#include "stdio.h"

void swap(int *x, int *y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}

void bubble(int a[], int n) {
    int i, j;
    for (i = 0; i < n - 1; ++i) {
        for (j = 0; j < n - 1; ++j) {
            if (a[j] > a[j + 1])
                swap(&a[j], &a[j + 1]);
        }
    }
}

int main() {

    int a[] = {3, 7, 9, 10, 6, 5, 12, 4, 11, 2}, n = 10;
    bubble(a, 10);
    for (int i = 0; i < 10; ++i) {
        printf("%d ", a[i]);
    }
    printf("\n");
    return 0;
}
