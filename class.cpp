#include <iostream>
using namespace std;

class stu {
private:
    int rno;
    char name[30];
    float m1, m2, avg;

public:
    void set_data() {
        cout << "Enter name, rno, m1, m2 marks: ";
        cin >> name >> rno >> m1 >> m2;
    }

    void cal_avg() {
        avg = (m1 + m2) / 2;
    }

    void display() {
        cout << "Name: " << name << endl;
        cout << "Roll No: " << rno << endl;
        cout << "Mark 1: " << m1 << endl;
        cout << "Mark 2: " << m2 << endl;
        cout << "Average: " << avg << endl;
    }
};

int main() {
    int n,i;
    cout << "Enter the number of students: ";
    cin >> n;

     stu c[i];
     

    for (int i = 0; i < n; ++i) {
        c[i].set_data();
        c[i].cal_avg();
    }

    for (int i = 0; i < n; ++i) {
        c[i].display();
    }



    return 0;
}

