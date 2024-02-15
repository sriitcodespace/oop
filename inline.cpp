#include<iostream>
using namespace std;
inline int fun(int x,int y){
return x*y;
}
int main()
{
int result,x,y;
cout<<"enter a,b";
cin>>x>>y;
result=fun(x,y);
cout<<"result ="<<result<<endl;
}
