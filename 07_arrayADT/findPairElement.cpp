//
// finding pair of elements with sum k in sorted array

#include <iostream>
#include <cstdio>
#include <cstdlib>


void display(int arr[], size_t size) {
    printf("\nElements are\n");
    for (int j = 0; j < size; ++j) {
        printf("%d ", arr[j]);
    }
}

int find(int arr[], int number, size_t size) {
    int i = 0, j = size - 1;
    while (i < j) {
        if (arr[i] + arr[j] == number) {
            printf("%d + %d = %d \n", arr[i], arr[j], number);
            i++;
            j--;
        } else if (arr[i] + arr[j] < number) i++;
        else j--;


    }
}
//
// finding pair of elements with sum k in sorted array using hashing


int main(){
    int array[] = {5, 8, 3, 9, 6, 2, 10, 7, -1, 4};
    display(array, 10);
    printf("\n");
    find(array, 8, 10);


}