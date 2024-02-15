#include<iostream>
using namespace std;
int main()
{

 int x=0,y=1,z=0,n;
 cout<<"enter a positive number";
 cin>>n;
 
 cout<<"fibo series:"<<x<<" "<<y<<" ";
 
 z=x+y;
 while(z<=n)
 {
 cout<<z<<" ";
 x=y;
 y=z;
 z=x+y;
 }
 return 0;
 }
