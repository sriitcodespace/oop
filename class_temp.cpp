#include<iostream>
using namespace std;
template<class T>
class demo{
public:
demo(T X){
cout<<X;
}
};
int main()
{
demo<int>d1(10);
cout<<endl;

demo<string>d4("raj");
cout<<endl;
}
