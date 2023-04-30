#include "iostream"
using namespace std;


class rectangle{
private:
    int length;
    int breadth;
public:
    rectangle(){
        length =0;
        breadth = 0;
    }
    rectangle(int l, int b){
        length = l;
        breadth = b;

    }
    int area(){
        return length * breadth;
    }
    int perimeter(){
        return 2 *(length+breadth);
    }
    void setLength(int l){
        length =l;
    }
    void setBreadth(int b){
        breadth = b;
    }
    int getLength(){
        return length;
    }
    int getBreadth(){
        return breadth;
    }
    ~rectangle(){
        cout<<"Destructor"<<endl;
    }

};

int main(){
    rectangle r (10, 20);
    cout << "Area " << r.area() << endl;
    cout << "Perimeter " << r.perimeter() << endl;
    return 0;
}