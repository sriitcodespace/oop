#include<iostream>
#include<vector>
using namespace std;

int main() {
    vector<int> numbers = {1, 2, 3, 4, 5};
    numbers.push_back(6);
    
    cout << "Numbers before pop:" << endl;
    for(int i = 0; i < numbers.size(); i++) {
        cout << numbers[i] << " ";
    }
    
    numbers.pop_back();
    cout << "\nNumbers after pop:" << endl;
    for(int i = 0; i < numbers.size(); i++) {
        cout << numbers[i] << " ";
    }
    
    cout << endl;
    for(int i = 0; i < numbers.size(); i++) {
        cout << "Numbers at position " << i << " = " << numbers.at(i) << endl;
    }
    
    return 0;
}

