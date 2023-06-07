#include <iostream>

void insert(int h[], int n) {
    int i = n, temp;
    temp = h[i];
    while (i > 1 && temp > h[i / 2]) {
        h[i] = h[i / 2];
        i = i / 2;

    }
    h[i] = temp;
}

int Delete(int a[], int n) {
    int i, j, x, temp, val;
    val = a[1];
    x = a[n];
    a[1] = a[n];
    a[n] = val;
    i = 1;
    j = i * 2;
    while (j < n - 1) {
        if (a[j + 1] > a[j])
            j = j + 1;
        if (a[i] < a[j]) {
            temp = a[i];
            a[i] = a[j];
            a[j] = temp;
            i = j;
            j = 2 * j;
        } else
            break;
    }
    return val;
}

int main() {
    int h[] = {0, 2, 5, 8, 9, 4, 10, 7};
    for (int i = 2; i <= 7; i++)
        insert(h, i);
    for (int i = 7; i > 1; i--) {
        printf("Deleted value is %d\n", Delete(h, i));
    }
    for (int i = 1; i <= 7; ++i) {
        printf("%d ", h[i]);
    }
    printf("\n");
    return 0;
}
