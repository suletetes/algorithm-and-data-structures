#include "stdio.h"

#define V 8
#define I 32767


int cost[V][V]{
        {I, I,  I, I,  I, I,  I, I},
        {I, I, 25, I,  I, I, 5,  I},
        {I, 25, I, 12, I, I,  I, 10},
        {I, I, 12, I, 8,  I,  I, I},
        {I, I,  I, 8,  I, 16, I, 14},
        {I, I,  I, I, 16, I, 20, 18},
        {I, 5,  I, I,  I, 20, I, I},
        {I, I, 10, I, 14, 18, I, I},
};
int near[8] = {I, I, I, I, I, I, I, I};
int t[2][6];

int main() {
    int i, j, k, u, v, n = 7, min = I;


}