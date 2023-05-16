#include <iostream>
#include "cstdlib"

//int stringLength(char arr []){
//    int i;
//    for ( i = 0; arr[i] != '\0'; ++i) {
//    }
////    printf("Thee length is %d ", i);
//    return i;
//}

void reverseString(char arr[], size_t size){
//    int size = sizeof(arr);
//    char temp[size];
    char temp[size];
    int i, j;
    for ( i = 0; arr[i] != '\0' ; ++i) {}
    i--;
    for ( j = 0; i >= 0; ++j) {
        temp[j] = arr[i];
    }
    temp[j] = '\0';
    printf("%s", temp);
}

void reverseString2(char arr[]){
    char t;
    int i, j;
    for (j = 0;  j[arr] != '\0'; j++) {}
    j--;
    for ( i = 0; i < j; j--) {
        t = arr[i];
        arr[i] = arr[j];
        arr[j] = t;
    }
    printf("%s", arr);
}
int main(){
    char a[] = "python";
    reverseString2(a);
//    printf("%llu", sizeof(a));
}