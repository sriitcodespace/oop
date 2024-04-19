#include<iostream>
using namespace std;

class employee 
{
    public:
    int n;
    float total=0;
    void inputsalary()
    {
        cout<<"enter no. of employee in department";
        cin>>n;
        float sal[50];
        for(int i=0;i<n;i++)
        {
            cout<<"enter salary of employee "<<i+1<<" :";
            cin>>sal[i];
            total=total+sal[i];
        }
        cout<<"total salary of the department is :"<<total<<endl;
    }

    int operator+(employee obj)
    {
        return total+obj.total;
    }
};

int main()
{
    employee uiux;
    uiux.inputsalary();
    employee it;
    it.inputsalary();
    int x = uiux+it;
    cout<<"total salary of the comapny is :"<<x<<endl;
}
