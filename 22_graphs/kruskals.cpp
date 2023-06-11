#include <iostream>

#define I 32767  // Infinity
#define V 7  // # of vertices in Graph
#define E 9  // # of edges in Graph

using namespace std;

void PrintMCST(int T[][V - 1], int A[][E]) {
    cout << "\nMinimum Cost Spanning Tree Edges\n" << endl;
    for (int i{0}; i < V - 1; i++) {
        cout << "[" << T[0][i] << "]-----[" << T[1][i] << "]" << endl;
    }
    cout << endl;
}

// Set operations: Union and Find
void Union(int u, int v, int s[]) {
    if (s[u] < s[v]) {
        s[u] += s[v];
        s[v] = u;
    } else {
        s[v] += s[u];
        s[u] = v;
    }
}

int Find(int u, int s[]) {
    int x = u;
    int v = 0;

    while (s[x] > 0) {
        x = s[x];
    }

    while (u != x) {
        v = s[u];
        s[u] = x;
        u = v;
    }
    return x;
}



int main() {


}