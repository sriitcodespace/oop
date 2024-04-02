#include <iostream>
using namespace std;
int main()
{
int *num=new int;
*num=10;
cout<<"number="<<*num;
delete num;
}

