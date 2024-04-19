#include<iostream>
using namespace std;
class employee
{
    public:
    int n;
    float avgsal=0;
    void inputsalaries()
    {
        cout<<"enter no. of employee in department :";
        cin>>n;
        float sal[n];
        for(int i=0;i<n;i++)
        {
            cout<<"enter salary of employee"<<i+1<<" :";
            cin>>sal[i];
            avgsal=avgsal+sal[i];
        }
        avgsal=avgsal/n;
        cout<<"average salary of department is "<<avgsal<<endl;
    }
    bool operator<(employee obj)
    {
        return avgsal<obj.avgsal;
    }
    
};

int main()
{
    employee uiux;
    uiux.inputsalaries();
    employee it;
    it.inputsalaries();
    if(uiux<it)
    cout<<"IT department has higher salary";
    else
    cout<<"UIUX department has higher salary";
}
