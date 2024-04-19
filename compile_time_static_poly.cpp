#include <iostream>
using namespace std;

class d
{
public:

void fun(int a)
{
cout<<"this is single parameter:"<<a<<endl;
}

void fun(int a,int b)
{
cout<<"this is two parameteriezed function:"<<a<<" "<<b<<endl;
}
};

int main()
{

 d A;
 A.fun(10);
 A.fun(10,20);
 }
 
