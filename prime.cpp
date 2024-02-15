#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the range: ";
    cin >> n;
    cout << "The prime numbers are: ";
    for (int i = 2; i <= n; ++i) {
        int c = 0;
        for (int j = 1; j <= i; ++j) {
            if (i % j == 0) {
                c++;
            }
        }
        if (c == 2) {
            cout << i << " ";
        }
    }
    return 0;
}

