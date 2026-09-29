#include<iostream>
using namespace std;

class emp
{
    int id, salary;
    string name, dept;
public:
    emp()
    {

    }
    emp(int x, string y)
    {
       id=x;
       name=y;
       dept= "AP";
       salary= "3000000";
    }
    void print()
    {
        cout<<"Details:"<<endl;
        cout<<"Employee id: "<<id<<endl;
        cout<<"Employee name: "<<name<<endl;
       cout<<"Employee dept: "<<dept<<endl;
       cout<<"Employee salary: "<<salary<<endl;
    }
};
int main()
{
    int x, a;
    string y, b;
    cout<<"Enter details:"<<endl;
        cin>>x;
        cin>>y;
        cin>>a;
        cin>>b;
    emp e1(x, y);
    emp e2(a, b);
    e1.print();
    e2.print();
    return 0;
}
