#include <iostream>
#include "cstdlib"

//specifically changing from uppper to lower case
char changeCase(char arr []){
    int i;
    for (i = 0; arr[i] != '\0' ; ++i) {
        arr[i] = arr[i] + 32;
    }
    printf("%s", arr);
}


int main(){

    char A[] = "WELCOME";
    changeCase(A);

    return 0;
}