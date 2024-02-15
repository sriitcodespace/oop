#include <iostream>
using namespace std;

int main()
{

int sum=0,temp,n,r;

cout<<"enter number";
cin>>n;

temp=n;

while(temp!=0){

r=temp%10;
sum=sum+(r*r*r);
temp=temp/10;
}

if(sum== n)
  cout<<n<<"is armstrong number";
  else
  cout<<n<<"is not armstrong number";
  return 0;
  }
