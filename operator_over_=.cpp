#include <iostream>

class MyNumber {
private:
    int value;

public:
    MyNumber(int val) : value(val) {}

    // Overloading the assignment operator (=)
    void operator=(const MyNumber& other) {
        this->value = other.value;
    }

    int getValue() const {
        return value;
    }
};

int main() {
    MyNumber num1(5);
    MyNumber num2(10);

    std::cout << "Before assignment, num1 value: " << num1.getValue() << std::endl;
    std::cout << "Before assignment, num2 value: " << num2.getValue() << std::endl;

    // Using the overloaded assignment operator
    num1 = num2;

    std::cout << "After assignment, num1 value: " << num1.getValue() << std::endl;

    return 0;
}

