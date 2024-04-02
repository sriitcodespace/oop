#include <iostream>
using namespace std;

void division(int x, int y, int z) {
    if ((x - y) != 0) {
        cout << "Result: " << z / (x - y) << endl;
    } else {
        throw(x - y);
    }
}

int main() {
    int x, y, z;
    cout << "Enter three numbers (x, y, z): ";
    cin >> x >> y >> z;
    
    try {
        division(x, y, z);
    } catch (int e) {
        cout << "\nDivision by zero error: x and y values can't be same\n";
    }
    
    return 0;
}

