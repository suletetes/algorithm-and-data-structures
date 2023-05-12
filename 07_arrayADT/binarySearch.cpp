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

int binarySearch(struct array arr, int key) {
    int l, mid, h;
    l = 0;
    h = arr.length - 1;
    while (l <= h) {
        mid = (l + h) / 2;
        if (key == arr.A[mid])
            return mid;
        else if (key < arr.A[mid])
            h = mid - 1;
        else
            l = mid + 1;
    }
    return 0;
}

int rBinSearch(int a[], int l, int h, int key) { // recursive function for binary seacrh
    int mid;
    if (l <= h) {
        mid = (l + h) / 2;
        if (key == a[mid])
            return mid;
        else if (key < a[mid])
            return rBinSearch(a, l, mid - 1, key);
        else
            return rBinSearch(a, l, mid + 1, key);
    }
}

int main() {
    int n;
    struct array arr{{2, 3, 4, 5, 6, 7, 8, 7, 5, 6}, 20, 5};


    printf("%d\n", binarySearch(arr, 5));
    display(arr);

    return 0;
}
