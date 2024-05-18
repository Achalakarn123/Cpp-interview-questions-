#include<iostream>
using namespace std;
int factorial(int n)
{
    int i,fact=1;
    for(i=1;i<=n;i++)
    {
        fact=fact*i;
    }
    return fact;
}
int nCr(int n,int r)
{
    int num,denom,nCr;
    num=factorial(n);
    denom=factorial(r)*factorial((n-r));
    nCr=num/denom;
    return nCr;
}
int main()
{
    int n,r;
    cout<<"Enter the value of n and r:-";
    cin>>n>>r;
    cout<<nCr(n,r);
         return 0;
}