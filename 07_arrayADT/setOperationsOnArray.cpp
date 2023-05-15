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

struct array *unions(struct array *arr1, struct array *arr2) {
    int i, j, k;
    i = j = k = 0;
    struct array *arr3 = (struct array *) malloc(sizeof(struct array));
    while (i < arr1->length && j < arr2->length) {
        if (arr1->A[i] < arr2->A[j])
            arr3->A[k++] = arr1->A[i++];
        else if (arr2->A[j] < arr1->A[i])
            arr3->A[k++] = arr2->A[j++];
        else {
            arr3->A[k++] = arr1->A[i++];
            j++;
        }
    }
    for (; i < arr1->length; ++i)
        arr3->A[k++] = arr1->A[i];
    for (; i < arr2->length; ++i)
        arr3->A[k++] = arr2->A[i];
    arr3->length = k;
    arr3->size = 10;

    return arr3;
}

struct array *intersection(struct array *arr1, struct array *arr2) {
    int i, j, k;
    i = j = k = 0;
    struct array *arr3 = (struct array *) malloc(sizeof(struct array));
    while (i < arr1->length && j < arr2->length) {
        if (arr1->A[i] < arr2->A[j])
            i++;
        else if (arr2->A[j] < arr1->A[i])
            j++;
        else if (arr1->A[i] == arr2->A[j]) {
            arr3->A[k++] = arr1->A[i++];
            j++;
        }
    }

    arr3->length = k;
    arr3->size = 10;

    return arr3;
}

struct array *difference(struct array *arr1, struct array *arr2) {
    int i, j, k;
    i = j = k = 0;
    struct array *arr3 = (struct array *) malloc(sizeof(struct array));
    while (i < arr1->length && j < arr2->length) {
        if (arr1->A[i] < arr2->A[j])
            arr3->A[k++] = arr1->A[i++];
        else if (arr2->A[j] < arr1->A[i])
            j++;
        else {
            j++;
            i++;
        }
    }
    for (; i < arr1->length; ++i)
        arr3->A[k++] = arr1->A[i];

    arr3->length = k;
    arr3->size = 10;

    return arr3;
}

int main() {
    int n;
    struct array arr{{2, 3, 4, 35, 6, 7, 8, 7, 5, 6}, 20, 5};
    struct array arr1{{2, 3, 4, 5, 6, 7, 8, 18, 5, 10}, 20, 5};
    struct array *arr3;
    arr3 = difference(&arr, &arr1);


    display(*arr3);
    return 0;
}
