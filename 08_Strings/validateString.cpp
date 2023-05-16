#include <iostream>
#include "cstdlib"

int valid(char *name) {
    for (int i = 0; name[i] != '\0'; ++i) {
        if (!(name[i] >= 65 && name[i] < 90) && !(name[i] >= 97 && name[i] <= 122) && !(name[i] >= 48 && name[i] <= 57))
            return 0;
    }
    return 1;
}

int main() {
//    char *name = "sggf2.";
    char *name = "sule";
    if (valid(name)) {
        printf("Valid string");
    } else {
        printf("Invalid string");
    }
}