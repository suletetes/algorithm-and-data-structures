#include "iostream"
#include "cstdlib"

using namespace std;

class element {
public:
    int i;
    int j;
    int x;
};

class sparse {
private:
    int m;
    int n;
    int num;
    element *ele;
public:
    sparse(int m, int n, int num) {
        this->m = m;
        this->n = n;
        this->num = num;
        ele = new element[this->num];
    }

    ~sparse() {
        delete[] ele;
    }

    void read() {
        cout << "enter non-zero elements ";
        for (int i = 0; i < num; ++i) {
            cin >> ele[i].i >> ele[i].j >> ele[i].x;
        }
    }

    void display() {
        int k;
        for (int i = 0; i < m; ++i) {
            for (int j = 0; j < n; ++j) {
                if (ele[k].i == i && ele[k].j == j)
                    cout << ele[k++].x << " ";
                else
                    cout << "0 ";
            }
            cout << endl;
        }
    }
};


int main() {
    sparse s1(5, 5, 5);
    s1.read();
    s1.display();
    return 0;
}