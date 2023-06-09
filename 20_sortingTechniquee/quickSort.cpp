#include <iostream>
#include "stdio.h"


void swap(int *x, int *y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}

int partition(int a[], int l, int h) {
    int pivot = a[l];
    int i = l, j = h;
    do {
        do { ++i; } while (a[i] <= pivot);
        do { --j; } while (a[i] > pivot);
        if (i < j) swap(&a[i], &a[j]);
    } while (i < j);
    swap(&a[l], &a[j]);
    return j;
}

void quickSort(int a[], int l, int h) {
    int j;
    if (l < h) {
        j = partition(a, l, h);
        quickSort(a, l, j);
        quickSort(a, j + 1, h);
    }
}

int main() {

    int a[] = {3, 7, 9, 10, 6, 5, 12, 4, 11, 2, INT_MAX}, n = 11;
    quickSort(a, 0, n);
    for (int i = 0; i < 10; ++i) {
        printf("%d ", a[i]);
    }
    printf("\n");
    return 0;
}
