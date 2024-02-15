#include <iostream>
using namespace std;

void for_fact() {
    int n;
    cout << "Enter integer: ";
    cin >> n;
    int fact = 1;
    for (int i = 1; i <= n; i++) {
        fact *= i;
    }
    cout << "Factorial: " << fact << endl;
}

void while_fact() {
    int n;
    cout << "Enter integer: ";
    cin >> n;
    int fact = 1;
    int i = 1;
    while (i <= n) {
        fact *= i;
        i++;
    }
    cout << "Factorial: " << fact << endl;
}

void do_while_fact() {
    int n;
    cout << "Enter integer: ";
    cin >> n;
    int fact = 1;
    int i = 1;
    do {
        fact *= i;
        i++;
    } while (i <= n);
    cout << "Factorial: " << fact << endl;
}

int main() {
    int ch;
    while (1) {
        cout << "1. For loop\n2. While loop\n3. Do while loop\n4. Exit\n";
        cout << "Enter your choice: ";
        cin >> ch;

        switch (ch) {
            case 1:
                for_fact();
                break;
            case 2:
                while_fact();
                break;
            case 3:
                do_while_fact();
                break;
            case 4:
                exit(0);
            default:
                cout << "Invalid choice! Please enter a number between 1 and 4." << endl;
        }
    }
    return 0;
}

