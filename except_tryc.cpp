#include<iostream>
#include<string>
#include<exception>
using namespace std;
int main()
{
int a,b;
cout<<"enter a,b values";
cin>>a>>b;
try{
if(b!=0)
cout<<a/b;
else
throw runtime_error(" b can't be zero");
}
catch (runtime_error e)
{
cout<<e.what();
}
}
