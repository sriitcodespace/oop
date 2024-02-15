#include <iostream>
#include <cstring>

using namespace std;

class StringSort {
public:
    char str[10][20], t[20];
    int n;

    void inputStrings() {
        cout << "Enter the number of names: ";
        cin >> n;
        cout << "Enter names:\n";
        for (int i = 0; i < n; i++) {
            cout << " ";
            cin >> str[i];
        }
    }

    void displaySorted() {
        bubbleSort();
        cout << "Sorted names:\n";
        for (int i = 0; i < n; i++) {
            cout << str[i] << endl;
        }
    }

    void bubbleSort() {
        for (int i = 0; i < n - 1; i++) {
            for (int j = 0; j < n - i - 1; j++) {
                if (strcmp(str[j], str[j + 1]) > 0) {
                    strcpy(t, str[j]);
                    strcpy(str[j], str[j + 1]);
                    strcpy(str[j + 1], t);
                }
            }
        }
    }
};

int main() {
    StringSort sorter;
    sorter.inputStrings();
    sorter.displaySorted();
    return 0;
}

