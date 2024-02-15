#include <iostream>

using namespace std;

class first
{
int *a,b;
public:

void alloc()
{
a=new int[10];
if(a==NULL)
cout<<"memory is not allocated"<<endl;
else
cout<<"memory allocated dynamically "<<endl;
}

void de_alloc()
{

delete a;
cout<<"memory deallocated dynamically"<<endl;
}
first()
{
cout<<"constructor invoked"<<endl;
cout<<"memory allocated via constructor"<<endl;
}

~first()
{
cout<<"destructor invoked"<<endl;
cout<<"memory de-allocated via destructor"<<endl;
}
};


int main()
{
first f;

f.alloc();
f.de_alloc();
}


