#include <iostream>
#include "stdio.h"

void merge(int A[], int l, int mid, int h) {
    int i = l, j = mid + 1, k = l;
    int B[100];
    while (i <= mid && j <= h) {
        if (A[i] < A[j])
            B[k++] = A[i++];
        else
            B[k++] = A[j++];
    }
    for (; i <= mid; i++)
        B[k++] = A[i];
    for (; j <= h; j++)
        B[k++] = A[j];
    for (i = l; i <= h; i++)
        A[i] = B[i];
}
