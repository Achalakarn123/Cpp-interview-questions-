#include<iostream>
using namespace std;
int evenOddChk(int n);
int main()
{
    int n;
    cout<<"Enter the value of n:-";
    cin>>n;
    if (evenOddChk(n))
    {
        cout<<"Number is even";
    }
    else
    {
         cout<<"Number is odd";
    }
         return 0;
}
int evenOddChk(int n)
{
    if(n&1==1)
    {
        return 0;
    }
    else{
        return 1;
    }
}