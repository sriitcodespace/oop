#include <iostream>
using namespace std;

class A {
private:
    int age;

public:
    A(int x) {
        age = x;
    }

    A(const A &a_obj1) {
        age = a_obj1.age;
    }

    int getData() {
        return age;
    }
};

int main() {
    A b(28);
    A c(b);

    cout << "orginal: " << b.getData() << endl;
    cout << "copied: " << c.getData() << endl;

    return 0;
}

