#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number you want to find the factorial:-";
    cin>>n;
    int ans;
    ans=n;
    cout<<"Factorial of"<<' '<<n<<"=";
    cout<<n;
    for(int i=n-1;i>=1;i--)
    {
        cout<<"*"<<i;
        ans=ans*i;
    }
    cout<<"="<<ans;
    return 0;
}
