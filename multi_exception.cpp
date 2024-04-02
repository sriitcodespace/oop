#include <iostream>
#include <stdexcept> 
using namespace std;

int main() {
    try {
        int choice;
        cout << "Enter choice: 1. Divide by zero  2. Out of range: ";
        cin >> choice;

        if (choice == 1) {
            int numerator, denominator;
            cout << "Enter the numerator: ";
            cin >> numerator;
            cout << "Enter the denominator: ";
            cin >> denominator;
            if (denominator == 0) {
                throw runtime_error("Error: Division by zero");
            }
            double result = (numerator) / denominator; 
            cout << "Result of division: " << result << endl;
        } else if (choice == 2) {
            int arr[5] = {1, 2, 3, 4, 5}; 
            int index;
            cout << "Enter an index to access an element in the array (0-4): ";
            cin >> index;
            if (index < 0 || index >= 5) { 
                throw out_of_range("Error: Index out of range");
            }
            cout << "Element at index " << index << ": " << arr[index] << endl;
        } else {
            cout << "Invalid choice!" << endl;
        }
    } catch(const runtime_error & e) {
        cout << "Runtime error: " << e.what() << endl;
    } catch(const out_of_range & e) { 
        cout << "Out of range error: " << e.what() << endl;
    } catch(...) {
        cout << "An unknown error occurred" << endl;
    }

    return 0;
}

