#include <iostream>
using namespace std;

void swap_no(int *a, int *b)
{
    int temp=*a;
    *a=*b;
    *b=temp;
    cout<<"a:"<<*a<<endl;
    cout<<"b:"<<*b<<endl;
}
int main()
{
    int a,b;
    cout<<"enter a & b:";
    cin>>a;
    cin>>b;
    swap_no(&a,&b);
}
