#include <iostream>
#include "cstdlib"
int stringLength(char arr []){
    int i;
    for ( i = 0; arr[i] != '\0'; ++i) {
    }
    printf("Thee length is %d ", i);
//    return 0;
}
int main() {
//    std::cout << "Hello, World!" << std::endl;
    char s[] = "welcome";

    stringLength(s);

    return 0;

}
