/*
   1
   2 1
   3 2 1
   4 3 2 1
*/

#include<iostream>
using namespace std;
int main()
{
    int i,j,n,count;
    cout<<"Enter the order:-";
    cin>>n;
    for(i=1;i<=n;i++)
    {   
        count=i;
        for(j=1;j<=i;j++)
        {
           cout<<count;
           count-=1;
           cout<<'\t';
        }
      cout<<"\n";
    }
}