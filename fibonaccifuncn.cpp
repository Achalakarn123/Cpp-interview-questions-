#include<iostream>
using namespace std;
int fibo(int a,int b,int n)
{
    cout<<a<<"\t";
    cout<<b<<"\t";
    int c=0;
    for(int i=1;i<=n-2;i++)
    {
       c=a+b;
       a=b;
       b=c; 
       cout<<c<<"\t";
    }
   return 0; 
}
int main()
{
    int a,b,n;
    cout<<"Enter the value of first 2 digits a & b:-";
    cin>>a>>b;
    cout<<"Enter the number of terms of the fibonacci series:-";
    cin>>n;
    fibo(a,b,n);
    return 0;
}