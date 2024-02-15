#include<iostream>
using namespace std;

class A {
private:
    int age1;
    int age2;

public:
    A(int x, int y) {
        age1 = x;
        age2 = y;
    }

    int getData1() {
        return age1;
    }

    int getData2() {
        return age2;
    }

    int addAges() {
        return age1 + age2;
    }
};

int main() {
    A b(28, 30);
    cout << "First person's age: " << b.getData1() << endl;
    cout << "Second person's age: " << b.getData2() << endl;
    
    cout << "Sum of ages: " << b.addAges();
    
    return 0;
}

