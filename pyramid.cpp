#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter n: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        for (int spaces = 1; spaces <= n - i; spaces++) {
            cout << " ";
        }

        for (int j = i; j < 2 * i; j++) {
            cout << j;
        }

        for (int j = 2 * i - 2; j >= i; j--) {
            cout << j;
        }

        cout << endl;
    }

    return 0;
}

