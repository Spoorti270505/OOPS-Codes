#include<iostream>
using namespace std;
class rectangle
{
    float width;
    float height;
    float area;
public:
    void setdata(float, float);
    void getdata()
    {
        area=width*height;
        cout<<"Area: "<<area<<endl;
    }
};
void rectangle::setdata(float width, float height)
    {
        this->width=width;
        this->height=height;
    }
int main()
{
    rectangle r1;
    float w,h;
    cin>>w;
    cin>>h;
    r1.setdata(w,h);
    r1.getdata();
    return 0;
}
