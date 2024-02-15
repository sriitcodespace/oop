#include <iostream>
#include <string>
using namespace std;

class Demo {
public:
    void demoFunction() {
        static int count = 0;
        cout << count << " ";
        count++;
    }
};

int main() {
    Demo demoObject;
    for (int i = 0; i < 5; i++)
        demoObject.demoFunction();
    return 0;
}

