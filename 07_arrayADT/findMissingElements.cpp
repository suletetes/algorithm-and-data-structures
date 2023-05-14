#include <iostream>
#include <cstdio>
#include <cstdlib>
// finding single missing element

void display(int arr[], size_t size) {
    printf("\nElements are\n");
    for (int j = 0; j < size; ++j) {
        printf("%d ", arr[j]);
    }
}

int missingElement(int arr[], size_t size) {
    int sum = 0, s = 0, missing_number, n;
    for (int i = 0; i < size; ++i) {
        sum += arr[i];
    }
    n = arr[size - 1];
    s = n * (n + 1) / 2;
    if (s == sum) {
        printf("no missing values");
    } else {
        missing_number = s - sum;
        return missing_number;
    }
}

int main() {
    int array[] = {1, 2, 3, 4, 5, 3, 4};
    printf("the missing value is %d", missingElement(array, 6));
    return 0;
}


