/*  
     1
     2 3
     4 5 6
     7 8 9 10
*/

#include<iostream>
using namespace std;
int main()
{
    int i,j,count=1,n;
    cout<<"Enter the value of n:-";
    cin>>n;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            cout<<count;
            count++;
            cout<<' ';
        }
      cout<<"\n";
    }
    
}