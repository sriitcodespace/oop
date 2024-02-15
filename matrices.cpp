#include<iostream>

using namespace std;

int main()
{
 int a[10][10],b[10][10],c[10][10],n;
 cout<<"enter rows and columns";
 cin>>n;
 
  cout<<"enter matrix A";
  for(int i=0;i<n;i++)
  {
  for(int j=0;j<n;j++)
  {
  cin>>a[i][j];
  }}
  cout<<"enter b matrix";
  for (int i=0;i<n;i++)
  {for(int j=0;j<n;j++)
  {
  cin>>b[i][j];
  }
  }
  
  for(int i=0;i<n;i++)
  {
  for(int j=0;j<n;j++){
  c[i][j]=0;
  for(int k=0;k<n;k++)
  {
  c[i][j]+=a[i][k]*b[k][j];
  }
  }
  }
  
  for(int i=0;i<n;i++)
  {
  for(int j=0;j<n;j++){
  
  cout<<c[i][j]<<"\t";
  }
  cout<<"\n";
  }
  }
  
