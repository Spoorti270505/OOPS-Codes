#include <iostream>

using namespace std;
int main()
{
    int n,i,j,maxi, a[3];
    cout<<"enter n:";
    cin>>n;

    for(i=0;i<n;i++) {
        cin>>a[i];
    }
    maxi=a[0];
    for(j=1;j<n;j++) {
        if(a[j]>maxi) {
            maxi=a[j];
        }
    }
    cout<<"maximum number:"<<maxi;
    return 0;
}
