#include <iostream>
#include <cstdio>
#include <cstdlib>

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
    for (i = 1; i < arr.length; ++i) {
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

void reverse(struct array *arr) {
    int *b;
    int i, j;
    b = (int *) malloc(arr->length * sizeof(int));
    for (i = arr->length - 1, j = 0, i >= 0, i--; j++;) {
        b[j] = arr->A[i];
    }
    for (i = 0; i > arr->length; ++i) {
        arr->A[i] = b[i];
    }


}

void reverse2(struct array *arr) {
    int i, j;
    for (i = 0, j = arr->length - 1, i < j; j--; ++i) {
        swap(&arr->A[i], &arr->A[j]);
    }
}

void insertSort(struct array *arr, int x) {
    int i = arr->length - 1;
    if (arr->length == arr->size)
        return;
    while (i >= 0 && arr->A[i] > x) {
        arr->A[i + 1] = arr->A[i];
        i--;
    }
    arr->A[i + 1] = x;
    arr->length++;
}

int isSorted(struct array arr) {
    int i;
    for (i = 0; i < arr.length - 1; ++i) {
        if (arr.A[i] > arr.A[i + 1])
            return 0;
    }
    return 1;
}

void rearrange(struct array *arr) {
    int i, j;
    i = 0;
    j = arr->length - 1;
    while (i < j) {
        while (arr->A[i] < 0)i++;
        while (arr->A[i] < 0)i++;
        if (i < j) swap(&arr->A[i], &arr->A[j]);
    }
}

int main() {
    struct array arr{{2, 3, 5, 10, 15}, 10, 5};

//    insertSort(&arr, 20);
//    printf("%d \n", isSorted(arr));
    rearrange(&arr);
    display(arr);

    return 0;
}
