//write a c++ to implement multi level inheritance using vehicle, car & sports car as class use appropriate member functions & data function.

#include<iostream>
using namespace std;

class vehicle
{
    int a;
public:
    void display1(int a) {
    cout<<"Vehicle number:"<<a<<endl;
    }
};
class car : protected vehicle
{
    float milege;
public:
    void display2(float b) {
    cout<<"Car milege:"<<b<<endl;
    }
};

class sports_car : protected car
{
    float speed;
public:
    void display3(float c) {
    cout<<"Car speed:"<<c<<endl;
    }
};
int main()
{
    vehicle v;
    car c;
    sports_car sc;
    v.display1(2);
    c.display2(45.5);
    c.display1(2);
    sc.display3(101.6);
    sc.display2(45.5);
    sc.display1(2);
    return 0;
}
