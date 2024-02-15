#include<iostream>

using namespace std;
class demo{

private:
int a;
public:
demo(int x)
{
a=x;
cout<<"constructor:allocating A=";
cout<<a<<endl;
}

~demo()
{
cout<<"destructor: deallocting A="<<a<<endl;
}
};

int main()
{

demo d(10);
}
