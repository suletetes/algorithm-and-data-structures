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

    friend istream & operator >> (istream &is, sparse &s);

    friend ostream & operator << (ostream &os, sparse &s);
};

istream &operator>>(istream &is, sparse &s) {
    cout << "enter non-zero elements ";
    for (int i = 0; i < s.num; ++i) {
        cin >> s.ele[i].i >> s.ele[i].j >> s.ele[i].x;
    }
    return is;
}

ostream &operator<<(ostream &os, sparse &s) {
    int k;
    for (int i = 0; i < s.m; ++i) {
        for (int j = 0; j < s.n; ++j) {
            if (s.ele[k].i == i && s.ele[k].j == j)
                cout << s.ele[k++].x << " ";
            else
                cout << "0 ";
        }
        cout << endl;
    }
    return os;
}




int main() {
    sparse s1(5, 5, 5);
    cin >> s1;
    cout << s1;
    return 0;
}