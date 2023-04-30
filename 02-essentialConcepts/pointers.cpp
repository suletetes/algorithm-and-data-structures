#include "iostream"
using namespace std;
//int main (){
//    int a = 10;
//    int *p;
//    p = &a;
//    cout << a << endl;
//    cout << *p;

//}

int main (){
    int *p;
    p = new int [5];
    p[0] =10;
    p[1] =15;
    p[2] =30;
    p[3] =16;
    p[4] =90;


    p = (int *) malloc(5* sizeof(int)); in c programming
    for (int i = 0; i < 6; ++i) {
        cout << p[i] << endl;
    }

}



