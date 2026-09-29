#include <iostream>
#include <cstring>

using namespace std;
int main()
{
    char s[]="mom";
    char a[20];

    strcpy(a,s);
    strrev(a);
    if(strcmp(s,a)==0) {
        cout<<"string is palindrome";
    }
    else {
        cout<<"string is not palindrome";
    }
    return 0;
}
