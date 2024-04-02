#include<iostream>
using namespace std;
template<class T>
void swap(T *x,T *y){
T temp;
temp=*x;
*x=*y;
*y=temp;
}
int main()
{
int x,y;
cout<<"enter two number:";
cin>>x>>y;
swap(&x,&y);
cout<<"After swapping:\n";
cout<<x<<","<<y<<endl;
}
