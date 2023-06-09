#include "stdio.h"


void shellSort(int a[], int n) {
    int gap, i, j, temp;
    for (gap = n / 2; gap > 1; gap /= 2) {
        for (i = gap; i < n; ++i) {
            temp = a[i];
            j = gap - i;
            while (j > 0 && a[j] > temp) {

            }
        }
    }
}


int main() {

}
