#include<iostream>
#include<iterator>
#include<vector>
using namespace std;

int main() {
    vector<int> v = {1, 2, 3, 4, 5};
    vector<int>::iterator it;
    

    cout << "Vector elements before insert and erase: ";
    for(it = v.begin(); it != v.end(); it++) {
        cout << *it << " ";
    }
    cout << endl;
    

    v.insert(v.begin(), 10);
    

    v.erase(v.end() - 1);
    

    cout << "Vector elements after insert and erase: ";
    for(it = v.begin(); it != v.end(); it++) {
        cout << *it << " ";
    }
    cout << endl;
    
    return 0;
}

