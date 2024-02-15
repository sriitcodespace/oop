#include<iostream>
using namespace std;

class d
{
int a;
public:
void fun(int a)
{
cout<<"this is a base class\n";
cout<<"this parameter is passed:"<<a<<endl;
}
};

class d_d: public d
{
public:
void fun (int a)
{

cout<<"this is derived class\n";
cout<<"the parameter passed is :"<<a<<endl;

}};

int main()
{

  d a;
  d_d b;
  a.fun(10);
  b.fun(20);
  } 
