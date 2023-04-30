#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "enter number";
    cin >> n;
    int b[n];
    b[0] = 2;

    int a[] = {2, 4, 6, 8, 10, 14, 56, 79};
//    int a[10] = {1};
    cout<< sizeof(a)<< endl;
    cout << a[1] <<endl;
    printf("%d\n", a[7]);

//    for (int i = 0; i < 10; i++){
//        cout << a[i] <<endl;
//    }

    for (int x : a){
        cout<< x << endl;
    }
    return 0;
}
