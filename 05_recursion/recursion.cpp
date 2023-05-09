#include <iostream>

//void fun(int n) {
//    if (n > 0) {
//        printf("%d \n", n);
//        fun(n - 1);
//    }
//}

void fun(int n) {
    if (n > 0) {
        fun(n - 1);
        printf("%d\n", n);
    }
}

int main() {
//    std::cout << "Hello, World!" << std::endl;

    int x = 3;
    fun(x);
    return 0;
}
