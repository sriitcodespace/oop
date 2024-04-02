#include <iostream>
#include <fstream>
using namespace std;

int main() {
    string name;
    int rollNo;
    
    cout << "Enter name: ";
    cin >> name;
    cout << "Enter roll number: ";
    cin >> rollNo;
    
    fstream fs("s.txt", ios::out | ios::in);
    if (fs.is_open()) {
        fs << name << " " << rollNo;
        int length = fs.tellp();
        cout << "Length of file: " << length << endl;
        
        cout << "Reverse:" << endl;
        for (int i = length - 1; i >= 0; i--) {
            fs.seekg(i, ios::beg);
            char c;
            fs.get(c);
            cout << c;
        }
        fs.close();
    } else {
        cout << "File doesn't exist." << endl;
    }
    
    return 0;
}

