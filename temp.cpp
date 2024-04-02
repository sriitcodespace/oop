#include<iostream>
#include<string>
using namespace std;

template<class T>
T sum(T x, T y) {
    return x + y;
}

int main() {
    cout << sum(10, 20) << endl;
    cout << sum(18.5, 28.2) << endl;
    cout << sum(string("HELLO"), string("WORLD!")) << endl;
    return 0;
}

