#include <iostream>
#include "stdio.h"


void swap(int *x, int *y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}


void merge(int a[], int l, int mid, int h) {
    int i, j, k;
    int b[100];
    while (i <= mid && j <= h) {
        if (a[i] < a[j])
            b[k++] = a[i++];
        else
            b[k++] = a[j++];
    }
    for (; i <= mid; ++i) {
        b[k++] = a[i];
    }
    for (; j <= h; ++j) {
        b[k++] = a[i];
    }
    for (int i = l; i <= h; ++i) {
        a[i] = b[i];
    }

}

void iterativeSort(int a[], int n) {
    int p, l, h, mid, i;
    for (p = 2; p <= n; p = p * 2) {
        for (i = 0; i + p - 1 < n; i = i + p) {
            l = i;
            h = i + p - 1;
            mid = (l + h) / 2;
            merge(a, l, mid, h);
        }
    }
    if (p / 2 < n)
        merge(a, 0, p / 2, n - 1);
}

int main() {

    int a[] = {3, 7, 9, 10, 6, 5, 12, 4, 11, 2, INT32_MAX}, n = 11;

    for (int i = 0; i < 10; ++i) {
        printf("%d ", a[i]);
    }
    printf("\n");
    return 0;
}
