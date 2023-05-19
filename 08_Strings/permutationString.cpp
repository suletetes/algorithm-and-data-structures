#include <iostream>
#include "cstdlib"

//void perm(char s[], int l, int h){
//    int i;
//    if (l ==h){
//        printf("%s", s);
//    }else{
//        for (i = l; i <= h ; ++i) {
//
//        }
//    }
//}


void perm(char s[], int k) {
    static int a[10] = {0};
    static char res[10];
    int i;
    if (s[k] == '\0') {
        res[k] == '\0';
        printf("%s", res);
    } else {
        for (i = 0; s[i] != '\0'; ++i) {
            if (a[i] == 0) {
                res[k] = s[i];
                a[i] = 1;
                perm(s, k + 1);
                a[i] = 0;
            }
        }
    }
}


int main(){
    char s[] = "ABC";
    perm(s, 0);
}