#include<iostream>
using namespace std;

class time
{
    int hour, minute, second;
public:
    void settime()
{
    hour=3;
    minute=18;
    second=2;
}
    void settime(int, int, int);
    void print()
    {
        cout<<"Hour: "<<hour<<endl;
        cout<<"Minute: "<<minute<<endl;
        cout<<"Second: "<<second<<endl;
    }
};

int main()
{
    time t1;
    time t2;
    t1.settime();
    t2.settime();
    t1.print();
    t2.print();
    return 0;
}
