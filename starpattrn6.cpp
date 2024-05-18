/*  
    ***
    **
    *
*/
#include<iostream>
using namespace std;
int main()
{
    int i,j,n;
    cout<<"Enter the order :-";
    cin>>n;
    for(i=1;i<=n;i++)
    {
         for(j=n-i+1;j>=1;j--)
         {
           cout<<'*';
         }
     cout<<"\n";
    }
    
}