#include<iostream>
#include<fstream>
using namespace std;
int main()
{
ifstream s("s.txt");
ofstream d("d.txt");
char ch;
if(s.is_open() && d.is_open())
{
while((ch=s.get())!= EOF)
{
  d.put(ch);
}
cout<<"Copy successful\n";
}
else
{
cout<<"file does not exist";
}
s.close();
d.close();
return 0;
}
