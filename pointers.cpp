#include<iostream>
using namespace std;
int main()
{
    int  a=5;
    int *ptr1;
    ptr1=&a;
    cout<<a;
    cout<<"\n";
    cout<<ptr1;
     cout<<"\n";
    cout<<&a;
     cout<<"\n";
    cout<<*ptr1;
     cout<<"\n";
    return 0;
}