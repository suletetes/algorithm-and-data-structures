#include <iostream>
#include "stdio.h"
#include "stdlib.h"

struct array {
    int *A;
    int size;
    int length;
};

int main() {
//    std::cout << "Hello, World!" << std::endl;
    int n;
    struct array arr;
    printf("Enter size of an array");
    scanf("%d", &arr.size);
    arr.A = (int *) malloc(arr.size * sizeof(int));
    arr.length = 0;

    printf("Enter number of numbers");
    scanf("%d", &n);

    for (int i = 0; i < n; ++i) {
        scanf("%d", &arr.A[i]);
    }
    arr.length
    return 0;
}
