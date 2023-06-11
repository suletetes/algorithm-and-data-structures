#include <iostream>
#include "stdio.h"
#include "queue.h"

//bfs(breadth first search) dfs (depth first search)
void bfs(int g[][7], int start, int n) {
    int i = start;
    struct Queue q;
    int visited[7] = {0};

    printf("%d ", i);
    visited[i] = 1;
    enqueue(q, i);
    while (!isEmpty()) {
        i = dequeue();
        for (int j = 1; j < n; ++j) {
            if (g[i][j] == 1 && visited[j] == 0) {
                printf("%d ", j);
                visited[j] = 1;
                enqueue(j);
            }
        }
    }
};

int main() {
    int g[7][7] = {
            {0, 0, 0, 0, 0, 0, 0},
            {0, 0, 1, 1, 0, 0, 0},
            {0, 1, 0, 0, 1, 0, 0},
            {0, 1, 0, 0, 1, 0, 0},
            {0, 0, 1, 1, 0, 1, 1},
            {0, 0, 0, 0, 1, 0, 0},
            {0, 0, 0, 0, 1, 0, 0},

    };
    return 0;
}
