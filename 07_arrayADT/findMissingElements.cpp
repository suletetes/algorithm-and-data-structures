#include <iostream>
#include <cstdio>
#include <cstdlib>


void display(int arr[], size_t size) {
    printf("\nElements are\n");
    for (int j = 0; j < size; ++j) {
        printf("%d ", arr[j]);
    }
}

//int missingElement()