#include<iostream>
using namespace std;
class student
{
public:
    string name;
    int age;
//public:
    void setdata();
 //   {
//        name= "Spoorti";
  //      age= 21;
        //cin>>name;
        //cin>>age;
   // }
    void displaydata()
    {
        cout<<"Name: "<<name<<endl;
        cout<<"Age: "<<age<<endl;
    }
};
void student:: setdata()
    {
        name= "Spoorti";
        age= 21;
        //cin>>name;
        //cin>>age;
    }
int main()
{
    student s1;
    //s1.age=21;
    s1.setdata();
    s1.displaydata();
    return 0;
}
