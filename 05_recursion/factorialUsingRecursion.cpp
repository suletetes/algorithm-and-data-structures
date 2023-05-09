#include "stdio.h"

int fact(int n) {
    if (n == 0)
        return 1;
    return fact(n - 1) * n;
}

int ifFact(int n) {
    int f = 1;
    int i;
    for (i = 1; i <= n; i++)
        f = f * i;
    return f;
}

int main() {
    int r;
    r = ifFact(-2);
    printf("%d ", r );
    return 0;
}
