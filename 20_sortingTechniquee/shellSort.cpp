#include "stdio.h"


void shellSort(int a[], int n) {
    int gap, i, j, temp;
    for (gap = n / 2; gap > 1; gap /= 2) {
        for (i = gap; i < n; ++i) {
            temp = a[i];
            j = i - gap;
            while (j > = 0 && a[j] > temp) {
                a[j + gap] = a[j];
                j = j - gap;
            }
            a[j + gap] = temp;
        }
    }
}


int main() {
    int a[] = {2, 3, 5, 67, 2, 47, 33, 4}, n = 8;

    shellSort(a, n);
    for (int i = 0; i < n; ++i) {
        printf("%d ", a[i]);
    }
    printf("\n");
    return 0;
}
