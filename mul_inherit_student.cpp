#include<iostream>
using namespace std;

class Person {
protected:
    char name[25];
    int age;
public:
    void set_person_details() {
        cout << "Enter name and age: ";
        cin >> name >> age;
    }
};

class Marks {
protected:
    int m1, m2, m3;
public:
    void set_marks() {
        cout << "Enter marks in sub 1, 2, 3: ";
        cin >> m1 >> m2 >> m3;
    }
};

class Student : public Person, public Marks {
    int rno, stan;
    float avg;
public:
    void set_student_details() {
        cout << "Enter roll number and class: ";
        cin >> rno >> stan;
    }

    void calculate_average() {
        avg = (m1 + m2 + m3) / 3.0;
    }

    void display() {
        cout << "Name: " << name << endl;
        cout << "Roll no: " << rno << endl;
        cout << "Age: " << age << endl;
        cout << "Standard: " << stan << endl;
        cout << "Marks:" << endl;
        cout << "   M1: " << m1 << endl;
        cout << "   M2: " << m2 << endl;
        cout << "   M3: " << m3 << endl;
        cout << "Average: " << avg << endl;
    }
};

int main() {
    int n;
    cout << "Enter number of students: ";
    cin >> n;
    
    Student s[20];
    for (int i = 0; i < n; i++) {
        s[i].set_person_details();
        s[i].set_student_details();
        s[i].set_marks();
        s[i].calculate_average();
        s[i].display();
    }
    
    return 0;
}

