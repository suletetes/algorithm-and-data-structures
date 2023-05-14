#include <iostream>
#include <cstdio>
#include <cstdlib>


void display(int arr[], size_t size) {
    printf("\nElements are\n");
    for (int j = 0; j < size; ++j) {
        printf("%d ", arr[j]);
    }
}

void minMAx(int a[], size_t size) {
    int min{a[0]};
    int max{a[0]};
    for (int i = 1; i < size; ++i) {
        if (a[i] < min) {
            min = a[i];
        } else if (a[i] > max) {
            max = a[i];
        }
    }
    printf("The min number is %d and max number is %d", min, max);

}

int main() {
    int array[] = {5, 8, 3, 9, 6, 2, 10, 7, -1, 4};
    minMAx(array, 10);
    display(array, 10);

}