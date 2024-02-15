#include<iostream>
using namespace std;

class student{
int rno;
char name[30];

public:
void set_data()
{
cout<<"enter name rno";
cin>>name>>rno;
}
void display()
{
cout<<"name:"<<name<<endl<<"rno:"<<rno<<endl;
}
};

class marks : private student
{
 float m1,m2;
 
 public:
 
  void set_s()
  {
  set_data();
  cout<<"enter m1,m2 marks:";
  cin>>m1>>m2;
  }
  
  void display_s()
  {
  display();
  cout<<"m1:"<<m1<<endl<<"m2:"<<m2<<endl;
  }
  };
  
  
  int main()
  {
    marks s;
    s.set_s();
    s.display_s();
    
    return 0;
    }
 
