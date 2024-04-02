#include<iostream>
using namespace std;
template<class T>
class calculator{
private:
T a,b;
public:
calculator(T a,T b){

cout<<"Numbers:"<<a<<"and"<<b<<"."<<endl;
cout<<a<<"+"<<b<<"="<<a+b<<endl;
cout<<a<<"-"<<b<<"="<<a-b<<endl;
cout<<a<<"*"<<b<<"="<<a*b<<endl;
cout<<a<<"/"<<b<<"="<<a/b<<endl;}
};
int main()
{


cout<<"int results:"<<endl;
calculator<int>a(3,1);
cout<<"float results:"<<endl;
calculator<float>b(2.4,1.2);
}

