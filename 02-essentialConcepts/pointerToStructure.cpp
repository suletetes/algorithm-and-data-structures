#include "iostream";
using namespace std;

struct rectangle{
    int length;
    int breadth;
};

int main (){
    rectangle r = {12, 5};
    cout << r.length << endl << r.breadth << endl;

    rectangle *p = &r;
    cout<<p->length<<endl<< p->breadth <<endl;


    rectangle *m;
    m = new rectangle; // in c++ programming
//    m = (struct rectangle *) malloc(sizeof(struct rectangle)); in c programming
    m-> length = 25;
    m-> breadth = 30;
    cout<< m->length << endl << m-> breadth << endl;
}