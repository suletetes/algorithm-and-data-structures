#include <iostream>
#include "cstdlib"

using namespace std;

class lowerTri {
private:
    int *a;
    int n;
public:
    lowerTri() {
        n = 2;
        a = new int[2 * (2 + 1)];
    }

    lowerTri(int n) {
        this->n = n;
        a = new int[n * (n + 1) / 2];
    }

    ~lowerTri() {
        delete[]a;
    }

    void set(int i, int j, int x);

    int get(int i, int j);

    void display();

    int getDimension() { return n; }
};

void lowerTri::set(int i, int j, int x) {
    if (i >= j)
        a[n * (j - 1) - (j - 2) * (j - 1) / 2 + i - j] = x;
}

int lowerTri::get(int i, int j) {
    if (i == j)
        return a[n * (j - 1) - (j - 2) * (j - 1) / 2 + i - j];
    return 0;
}

void lowerTri::display() {
    int i, j;
    for (i = 0; i < n; ++i) {
        for (j = 0; j < n; ++j) {
            if (i == j) printf("%d ", a[n * (j - 1) - (j - 2) * (j - 1) / 2 + i - j]);
            else printf("0 ");
        }
        printf("\n");
    }
}


int main() {
    int d;
    printf("Enter dimensions ");
    cin >> d;

    int x;
    lowerTri lm(d);
    cout << "Enter all elements";
    for (int i = 1; i <= d; ++i) {
        for (int j = 1; j <= d; ++j) {
            cin >> x;
            lm.set(i, j, x);
        }
    }
    lm.display();
//    printf("%d \n", d.get(2, 2));

//    std::cout << "Hello, World!" << std::endl;
    return 0;
}
