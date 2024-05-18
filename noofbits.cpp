#include<iostream>                  
using namespace std;
int function1(int a)
{
    int sum=0;
    while(a!=0)
    {
        int rem=a&1;
        if(rem==1)
        {
            sum=sum+rem;
        }
        a=a>>1;
    }
    return sum;
}
int function2(int b)
{
    int sum=0;
    while(b!=0)
    {
        int rem=b&1;
        if(rem==1)
        {
            sum=sum+rem;
        }
        b=b>>1;
    }
    return sum;
}
int main()
{     
    int a,b,sum=0;
    cout<<"Enter two numbers:-";
    cin>>a>>b;
    sum=function1(a)+function2(b);  
    cout<<sum;                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                   
    return 0;
}