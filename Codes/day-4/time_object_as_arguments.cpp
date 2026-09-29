#include<iostream>
using namespace std;

class time
{
    int hour, minute, second;
public:
    void settime()
{
    cin>>hour;
    cin>>minute;
    cin>>second;
}
    void print()
    {
        cout<<"Hour: "<<hour<<endl;
        cout<<"Minute: "<<minute<<endl;
        cout<<"Second: "<<second<<endl;
    }
    void addtime(time x, time y)
    {
        hour= x.hour + y.hour;
        minute= x.minute + y.minute;
        second= x.second + y.second;
    }
};
int main()
{
    time t1, t2, t3;
    t1.settime();
    t2.settime();
    //t1.print();
    //t2.print();
    t3.addtime(t1, t2);
    t3.print();
    return 0;
}
