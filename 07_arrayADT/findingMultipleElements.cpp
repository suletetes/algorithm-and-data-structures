#include <iostream>
#include <cstdio>
#include <cstdlib>

void display(int arr[], size_t size) {
    printf("\nElements are\n");
    for (int j = 0; j < size; ++j) {
        printf("%d ", arr[j]);
    }
}

int findingMultipleMissingElements(int arr[], size_t size) {
    int l = arr[0];
    int diff = l + 0;

    for (int i = 0; i < size; ++i) {
        if (arr[i] - 1 != diff) {
            while (diff < arr[i] - 1) {
                printf("missing element is : %d \n ", i + diff);
                diff++;
            }
        }
    }
}

//finiding missing elements using hashing
int *newMissing(int arr[], size_t size, int low, int high) {
    int *h = new int[high];
    for (int i = 0; i < high; ++i) {
        h[i] = 0;
        printf("%d ", h[i]);
    }

    for (int i = low; i <size ; ++i) {
        h[arr[i]]++;
    }
    for (int i = 0; i <= high; ++i) {
        if (h[i] == 0){
            printf("\n Missing elements are : %d", i);
        }
        return h;
    }
}


int main() {
    int array[] = {1, 2, 5, 6, 7, 8, 4, 9, 8};
    display(array, 8);
    findingMultipleMissingElements(array, 8);

    return 0;
}