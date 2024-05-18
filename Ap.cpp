#include<iostream>
using namespace std;
int AP(int n);
int main()
{
    int n; 
    cout<<"Enter the value of n:-";
    cin>>n;
    cout<<AP(n);
}
int AP(int n)
{
    int AP=(3*n)+7;
    return AP;
}