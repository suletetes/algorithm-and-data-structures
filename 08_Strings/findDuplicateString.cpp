#include <iostream>
#include "cstdlib"

void duplicatesString(char a[]){
    int h[26], i;
    for (i = 0; a[i] != '\0' ; ++i) {
        h[a[i] - 97] ++;

    }
    for (i = 0;  i<26; i++) {
        if (h[i] > 1){
            printf("%c", i+97);
            printf("%d", i+97);
        }
    }
}

int main(){
    char b[] = "finding";
    duplicatesString(b);
}





