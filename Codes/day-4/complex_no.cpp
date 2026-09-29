#include<iostream>
using namespace std;

class complexn
{
    float real, imaginary;
public:
    void setdata()
{
    cin>>real;
    cin>>imaginary;
}
    void print()
    {
        cout<<"Result: ";
        cout<<real<<"+i"<<imaginary<<endl
    }
    void addnumber(complexn c1, complexn c2)
    {
        real= c1.real + c2.real;
        imaginary= c1.imaginary + c2.imaginary;
    }
};

int main()
{
    complexn c1, c2, c3;
    c1.setdata();
    c2.setdata();
    c3.addnumber(c1, c2);
    c3.print();
    return 0;
}
