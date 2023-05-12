#include <iostream>
#include "stdio.h"
#include "stdlib.h"

struct array {
    int A[20];
    int size;
    int length;
};

void display(struct array arr) {
    printf("\nElements are\n");
    for (int j = 0; j < arr.length; ++j) {
        printf("%d ", arr.A[j]);
    }
}

void append(struct array *arr, int x) {
    if (arr->length < arr->size)
        arr->A[arr->length++] = x;
}

void insert(struct array *arr, int index, int x) {
    if (index >= 0 && index <= arr->length) {
        for (int i = arr->length; i > index; --i) {
            arr->A[i] = arr->A[i - 1];
        }
        arr->A[index] = x;
        arr->length++;
    }
}

int Delete(struct array *arr, int index) {
    int x = 0;
    if (index >= 0 && index < arr->length) {
        x = arr->A[index];
        for (int i = index; i < arr->length - 1; ++i) {
            arr->A[i] = arr->A[i + 1];
            arr->length--;
        }
    }
    return x;
}

void swap(int *x, int *y) {
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

int linearSearch(struct array *arr, int key) {
    for (int i = 0; i < arr->length; ++i) {
        if (key == arr->A[i]) {
            swap(&arr->A[i], &arr->A[i - 1]);
            return i;
        }
    }
    return -1;
}


int main() {
    int n;
    struct array arr{{2, 3, 4, 5, 6, 7, 8, 7, 5, 6}, 20, 5};
    printf("%d\n", linearSearch(&arr, 4));

    display(arr);

    return 0;
}
