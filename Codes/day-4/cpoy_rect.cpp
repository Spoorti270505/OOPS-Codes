#include<iostream>
using namespace std;
class rect
{
    float width;
    float height;
    //float area;
public:
    rect()
    {

    }
    rect(float &x, float &y)
    {
        width=x;
        height=y;
    }
    void getdata()
    {
        //area=width*height;
        cout<<"width: "<<width<<endl;
        cout<<"Height: "<<height<<endl;
    }
};

int main()
{
    //rect r1, r2;
    float w,h;
    cin>>w;
    cin>>h;
    rect r1(w,h);
    rect r2(r1);
    r1.getdata();
    r2.getdata();
    return 0;
}
