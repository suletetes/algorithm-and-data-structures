#include <iostream>
#include "cstdlib"

void compare(char a[], char b[]) {
    int i, j;
    for (i = 0, j = 0; a[i] != '\0' && b[j] != '\0'; j++, ++i) {
        if (a[i] != b[j]) {
            break;
        }
    }
    if (a[i] == b[j]) printf("equal");
    else if (a[i] < b[j]) printf("smaller");
    else printf("greater");
}

void palindrome(char arr[]) {
    char t;
    int i, j;
    for (j = 0; j[arr] != '\0'; j++) {}
    j--;
    for (i = 0; i < j; i++, j--) {
        t = arr[i];
        arr[i] = arr[j];
        arr[j] = t;
    }
    if (arr[i] == arr[j]) {
        printf("It is a palindrome");
    } else {
        printf("It is not a palindrome");

    }
    printf("%s", arr);
//    return arr;

}


int main() {
    char a[] = "pain";
    char b[] = "paining";
    char c[] = "madam";
    palindrome(c);

}