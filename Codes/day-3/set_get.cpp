#include<iostream>
using namespace std;
class test
{
private:
    int mark;
    float spi;
public:
    void setdata()
    {
        mark=270;
        spi=6.5;
    }
    void displaydata()
    {
        cout<<"Mark= "<<mark<<endl;
        cout<<"spi= "<<spi<<endl;
    }
};
int main()
{
    test o1;
    o1.setdata();
    o1.displaydata();
    return 0;
}
