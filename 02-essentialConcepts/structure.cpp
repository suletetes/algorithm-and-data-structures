#include <stdio.h>
#include "iostream"

using namespace std;

struct rectangle{
    int length;
    int breadth;
    char x;
};

int main(){
    struct rectangle r1;

    r1 ={10, 5};
    r1.length = 135;
    cout<< r1.length  << endl;
    cout<< r1.breadth  << endl;

    cout << sizeof(r1) << endl;

}