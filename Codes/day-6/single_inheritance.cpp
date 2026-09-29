#include<iostream>
using namespace std;

class animal
{
    int legs=4;
public:
    void display1() {
    cout<<"\nlegs="<<legs;
    }
};
class dog: public animal
{
    bool tail=true;
public:
    void display2() {
    cout<<"\ntail="<<tail;
    }
};
int main()
{
    animal a1;   //base class constructer allocates memory
    dog d1;
    d1.display1();
    d1.display2();
    return 0;
}
