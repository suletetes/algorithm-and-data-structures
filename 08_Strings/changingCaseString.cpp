#include <iostream>
#include "cstdlib"

//specifically changing from uppper to lower case
char upperToLower(char arr[]) {
    int i;
    for (i = 0; arr[i] != '\0'; ++i) {
        arr[i] = arr[i] + 32;
    }
    printf("%s", arr);
}

char caseChanger(char arr[]) {
    for (int i = 0; arr[i] != '\0'; ++i) {
        if (arr[i] >= 65 && arr[i] <= 90)
            arr[i] += 32;
        else if (arr[i] >= 'a' && arr[i] <= 122)
            arr[i] -= 32;
    }
    printf("%s", arr);

}


int main() {

    char A[] = "WELCOME";
    upperToLower(A);
    printf("\n %s \n", A);
    caseChanger(A);

    return 0;
}