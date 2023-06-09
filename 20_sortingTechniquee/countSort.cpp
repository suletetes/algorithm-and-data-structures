#include <stdio.h>
#include<stdlib.h>


int findMax(int a[], int n) {
    int max = INT_MIN;
    int i;
    for (int i = 0; i < n; ++i) {
        if (a[i] > max)
            max = a[i];
    }
    return max;
}

void countSort(int a[], int n) {
    int i, j, max, *c;
    c = (int *) malloc(sizeof(int) * max + 1);
    for (i = 0; i < max + 1; ++i) {
        c[i] = 0;
    }
    for (i = 0; i < n; ++i) {
        c[a[i]]++;
    }
    i = 0;
    j = 0;
    while (j < max + 1) {
        if (c[j] > 0) {
            a[i] = j;
            c[j]--;
        } else
            j++;
    }

}


int main() {

    int a[] = {3, 7, 9, 10, 6, 5, 12, 4, 11, 2}, n = 10;
    findMax(a, n);
    for (int i = 0; i < 10; ++i) {
        printf("%d ", a[i]);
    }
    printf("\n");
    return 0;
}
