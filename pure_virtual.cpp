#include<iostream>
using namespace std;
class base
{
public:
int a,b;
void details()
{
cout<<"enter a,b";
cin>>a>>b;
}
virtual void display()=0;
};
class derived:public base
{
public:
int x,y;
void details()
{
cout<<"enter x,y";
cin>>x>>y;
}
void display()
{
cout<<"DERIVED CLASS";
cout<<"\n x="<<x<<"y="<<y;
}
};
int main()
{
derived d;
d.details();
d.display();
}
