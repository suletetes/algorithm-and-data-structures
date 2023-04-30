#include "iostream"
using  namespace std;

void fun(int *A, int n){
    for (int i = 0; i < n; i++) {
        cout<<A[i]<<endl;
    }
}

int * test(int size){
    int *p;
    p = new int[size];
    for (int i = 0; i < size; ++i) {
        p[i] = i + 1;
        return p;
    }
}

int main(){
    int a[] = {2,34,5 ,66,76};
    int n = 5;
    fun(a, 5);

    int *ptr, sz = 5;
    ptr = test(sz);

    for (int i = 0; i < sz; ++i) {
        cout << ptr[i]<<endl;
    }
}