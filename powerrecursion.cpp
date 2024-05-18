#include<iostream>
using namespace std;
int power(int n,int pow)
{
    int p=1; 
    for(int i=1;i<=pow;i++)
    {
        p=p*n;
    }
   cout<<p;
   return 0;
}
int main()
{
    int n,pow;
   cout<<"Enter the value of n:-"; 
   cin>>n;
   cout<<"pow";
   cin>>pow;
   power(n,pow);
return 0;
}