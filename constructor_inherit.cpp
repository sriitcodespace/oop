#include<iostream>
using namespace std;

class A {
    int x;
public:
    A(int x) : x(x) {
        cout << "x:" << x << endl;
    }
};

class B {
    int y;
public:
    B(int y) : y(y) {
        cout << "y:" << y << endl;
    }
};

class C : public A, public B {
public:
    C(int a, int b) : A(a), B(b) {
        cout << "constructor inheritance" << endl;
    }
};

int main() {
    C c1(100, 10);
    return 0;
}

