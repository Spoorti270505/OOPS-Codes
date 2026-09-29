#include<iostream>
using namespace std;
class student
{
public:
    string name;
    int age;
    void setdata();
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
    }
int main()
{
    student s1;
    s1.setdata();
    s1.displaydata();
    return 0;
}
