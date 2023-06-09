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

void merge(int a[], int l, int mid, int h) {
    int i, j, k;
    int b[100];

}

int main() {

    int a[] = {3, 7, 9, 10, 6, 5, 12, 4, 11, 2, INT32_MAX}, n = 11;
    quickSort(a, 0, n - 1);
    for (int i = 0; i < 10; ++i) {
        printf("%d ", a[i]);
    }
    printf("\n");
    return 0;
}
