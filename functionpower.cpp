#include<iostream>
using namespace std;
int power();
int main()
{
    cout<<power();
    return 0;
}
int power()                         
{
    int n,p,i,ans=1;
    cout<<"Enter the number:-";
    cin>>n;
    cout<<"Enter the value of power:-";
    cin>>p;
    for(i=1;i<=p;i++)
    {
        ans=ans*n;
    }
    return ans;
} 