#include <iostream>
#include "stdio.h"


void swap(int *x, int *y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}

void selectionSort(int a[], int n) {
    int i, j, k;
    for (i = 1; i < n; ++i) {
        for (j = k = i; j < n; ++j) {
            if (a[j] < a[k])
                k = j;
        }
        swap(&a[i], &a[k]);
    }
}

int main() {

    int a[] = {3, 7, 9, 10, 6, 5, 12, 4, 11, 2}, n = 10;
    selectionSort(a, n);
    for (int i = 0; i < 10; ++i) {
        printf("%d ", a[i]);
    }
    printf("\n");
    return 0;
}
