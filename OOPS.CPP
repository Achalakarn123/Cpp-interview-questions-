/*
        *
       ***
      *****
       ***
        *
*/  
#include<iostream>
using namespace std;
int main()
{ 
    int n;
    cout<<"Enter the no.of rows:-";
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n-i;j++)//0<2  1<2
        {
            cout<<" ";
        }
        for(int k=1;k<=i;k++)
        {
            cout<<"*";
        }
        for( int l=i-1;l>0;l--)
        {
            cout<<"*";
        }
        cout<<"\n";
    }
      for(int i=n-1;i>=1;i--)
    {
        for(int j=1;j<=n-i;j++)//0<2  1<2
        {
            cout<<" ";
        }
        for(int k=1;k<=i;k++)
        {
            cout<<"*";
        }
        for( int l=i-1;l>0;l--)
        {
            cout<<"*";
        }
        cout<<"\n";
    }
    return 0;
}