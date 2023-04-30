#include "iostream"

using namespace std;
template <class T>
class arithmetic {
private:
    T a;
    T b;
public:
    arithmetic(T a, T b);
    T add();
    T sub();
};

template<class T>
arithmetic<T>::arithmetic(T a, T b) {
    this->a = a;
    this->b = b;
}
template<class T>
T arithmetic<T>::add() {
    T c;
    c = a + b;
    return c;
}
template<class T>
T arithmetic<T>::sub() {
    T c;
    c = a - b;
    return c;
}


int main() {
    arithmetic<float> ar(10.23, 20.24), ar2(12.34, 90.24);
    cout << "Add " << ar.add() << endl;
    cout << "sub " << ar2.sub() << endl;

    arithmetic<char> b('a', 's');
    cout << "Add " << b.add() << endl;
    cout << "sub " << b.sub() << endl;

    return 0;
}