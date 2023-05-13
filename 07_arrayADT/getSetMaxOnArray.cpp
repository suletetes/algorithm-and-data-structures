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

int get(struct array arr, int index) {
    if (index >= 0 && index < arr.length)
        return arr.A[index];
    return -1;
}

void set(struct array *arr, int index, int x) {
    if (index >= 0 && index < arr->length)
        arr->A[index] = x;
}

int max(struct array arr) {
    int max = arr.A[0];
    int i;
    for ( i = 1; i < arr.length; ++i) {
//        if (arr.A[i] > max)
        if (max > arr.A[i])
            max = arr.A[i];
    }
    return max;
}

int min(struct array arr) {
    int min = arr.A[0];
    for (int i = 1; i < arr.length; ++i) {
        if (arr.A[i] < min)
            min = arr.A[i];
    }
    return min;
}

int sum(struct array arr) {
    int s = 0;
    for (int i = 0; i < arr.length; ++i) {
        s += arr.A[i];
        return s;
    }
}

float average(struct array arr) {
    return (float) sum(arr) / (arr.length);
}

int main() {
    int n;
    struct array arr{{2, 3, 4, 5, 0, 7, 8, 7, 5, 6}, 20, 5};


    printf("%d\n", max(arr));
    printf("%d\n", get(arr, 0));
    printf("%d\n", min(arr));
    printf("%d\n", sum(arr));
    printf("%f\n", average(arr));
    set(&arr, 0, 15);
    display(arr);

    return 0;
}
