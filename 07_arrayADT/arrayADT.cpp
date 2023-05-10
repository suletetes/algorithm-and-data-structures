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

int main() {
    int n;
    struct array arr{{2, 3, 4, 5, 6, 7, 8, 7, 5, 6}, 20, 5};
//    printf("Enter size of an array ");
//    scanf("%d", &arr.size);
//    arr.A = (int *) malloc(arr.size * sizeof(int));
//    arr.length = 0;
//    printf("Enter number of numbers ");
//    scanf("%d", &n);
//
//    for (int i = 0; i < n; ++i) {
//        scanf("%d", &arr.A[i]);
//    }
//    arr.length = n;
    display(arr);
    return 0;
}
