#include <bits/stdc++.h>
using namespace std;

int main() {
    fstream f1;
    fstream f2;
    string ch;

    cout << "Enter subject: ";
    cin >> ch;

    f2.open("file2.txt", ios::out);
    if (f2.is_open()) {
        f2 << ch;
        f2.close();
    } else {
        cerr << "Error opening file for writing." << endl;
        return 1; 
    }

    f2.open("file2.txt", ios::in);
    if (f2.is_open()) {
        while (f2 >> ch) {
            cout << ch << endl;
        }
        f2.close();
    } else {
        cerr << "Error opening file for reading." << endl;
        return 1; 
    }

    return 0;
}

