#include<iostream>
using namespace std;
int main()
{
     int i,j,k,n=3;
	 for(i=1;i<=n;i++)//i=1 2 3
	 {
		for(j=1;j<=n-i;j++)//j=2 1
	   {
        cout<<" ";
       }
        for(k=1;k<=i;k++) 
	   {
         cout<<"*";
       }
       cout<<"\n";
     }
      return 0;
}