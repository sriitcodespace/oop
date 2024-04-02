#include <iostream>
using namespace std;

class A {
public:
    int x;
};

class B : public A {
public:
    B() {
        x = 16;
    }
};

class C {
public:
    int y;
    C() {
        y = 16;
    }
};

class D : public B, public C {
public:
    void add() {
        cout << "Sum: " << x + y << endl;
    }
};

int main() {
    D obj;
    obj.add();
    return 0;
}

