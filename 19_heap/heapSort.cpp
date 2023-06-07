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

int main() {
    int h[] = {0, 2, 5, 8, 9, 4, 10, 7};
    insert(h, 2);
    insert(h, 1);
    insert(h, 5);
    insert(h, 4);
    return 0;
}
