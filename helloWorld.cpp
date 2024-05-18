#include<iostream>
using namespace std;
int main()
{
    char c[20];
    int n;
    cout<<"Enter the range:-";
    cin>>n;
    cout<<"Enter your name:-";
    for(int i=0;i<n;i++)
    {
        cin>>c[i];
    }
    for(int i=0;i<n;i++)
    {
        cout<<c[i];
    }
    return 0;
}