#include <iostream>
#include <cstdio>
#include <cstdlib>

void display(int arr[], size_t size) {
    printf("\nElements are\n");
    for (int j = 0; j < size; ++j) {
        printf("%d ", arr[j]);
    }
}

void find_dup(int arr[], int len) {
    int i, j;
    if (len < 2)
        return;
    i = 0;
    while (i < len - 1) {
        j = 0;
        while (arr[i + 1] == arr[i] && i < len - 1)
            i++, j++;
        if (j)
            printf("%d is appearing %d times\n ", arr[i], j++);
        i++;
    }
}

int main() {
    int array[] = {1, 2, 3, 4, 4, 5, 5, 6, 6};
    find_dup(array, 8);
}