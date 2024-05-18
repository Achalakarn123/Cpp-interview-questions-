#include<iostream>
using namespace std;
int main()
{
    int a=5;
    int *ptr=&a;
    *ptr=6;
    cout<<a;
    return 0;
}