#include <iostream>
using namespace std;

class student {
private:
    int rno;
    char name[30];
    float m1, m2;

public:
    static void set_data(student &s) {
        cout << "Enter name, roll number, marks for m1, and marks for m2: ";
        cin >> s.name >> s.rno >> s.m1 >> s.m2;
    }

    static void display(const student &s) {
        cout << "Name: " << s.name << endl;
        cout << "Roll No: " << s.rno << endl;
        cout << "Marks - m1: " << s.m1 << ", m2: " << s.m2 << endl;
    }
};

int main() {
    student s;
    student::set_data(s);
    student::display(s);
    return 0;
}

