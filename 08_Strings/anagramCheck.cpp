#include "iostream"
#include <cstdio>


// An anagram is a word or phrase formed by rearranging the letters
// of a different word or phrase, typically using
// all the original letters exactly once.

void anagramCheck(char a[], char b[]) {
    int i, h[26] = {0};
    for (i = 0; a[i] != '\0'; ++i) {
        h[a[i] - 97]++;
    }
    for (i = 0; b[i] != '\0'; i++) {
        h[a[i] - 97]--;
        if (h[a[i] - 97] < 0) {
            printf("not anagram");
            break;
        }
    }
    if (b[i] == '\0') {
        printf("It is anagram");
    }
}

int main(){
    char a[] = "decimal";
    char b[] = "medical";
    anagramCheck(a, b);

}