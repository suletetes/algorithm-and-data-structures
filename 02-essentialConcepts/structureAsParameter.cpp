#include "iostream"
#include "stdio.h"
#include "stdlib.h"
using namespace std;
struct rectangle{
    int length;
    int breadth;
};
void fun(struct rectangle *p){
    p->length = 20;
    cout<< "length" << p->length << endl << "Breadth"<< p->breadth <<endl;
};
int main(){
    struct rectangle r={10, 6};
    fun(&r);
    printf("Length %d \n Breadth %d\n", r.length, r.breadth);
}