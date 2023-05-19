#include <iostream>
#include "cstdlib"

void duplicatesString(char a[]) {
    int h[26], i;
    for (i = 0; a[i] != '\0'; ++i) {
        h[a[i] - 97]++;

    }
    for (i = 0; i < 26; i++) {
        if (h[i] > 1) {
            printf("%c", i + 97);
            printf("%d", i + 97);
        }
    }
}

void duplicatesString2(char a[]) {
    long int h = 0, x = 0;
    int i;
    for (i = 0; a[i] != '\0'; ++i) {
        x = 1;
        x = x << (a[i] - 97); // asci code starting from small letter a is 97
    }
    if ((x & h) > 0) {
        printf("%c is duplicate", a[i]);
    } else {
        h = (x|h);
    }
}

int main() {
    char b[] = "finding";
    duplicatesString(b);
}





