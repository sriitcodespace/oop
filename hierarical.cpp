#include <iostream>
using namespace std;

class vehicle {
public:
    vehicle() {
        cout << "\nThis is a vehicle";
    }
};

class car : public vehicle {
public:
    car() {
        cout << "\nThis is a car";
    }
};

class bus : public vehicle {
public:
    bus() {
        cout << "\nThis is a bus";
    }
};

int main() {
    car c;
    bus b;
    
    return 0;
}

