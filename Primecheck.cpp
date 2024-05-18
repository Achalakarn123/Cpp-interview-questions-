#include <iostream>
using namespace std;
void main()
{
    int n,i,count=0;
    cout<<"Enter the value of n:-";
    cin>>n;
    if(n<=2)
    {
        return false;
    }
    for(i=2;i<n;i++)
    {
        if(n%i!=0)
        {
           return true; 
        }
        else
        {
           break;
        }
      return false;
    }
    {
        cout<<""

    }
}