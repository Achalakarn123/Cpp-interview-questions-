/* 
    1
    2 3
    3 4 5
    4 5 6 7 
*/

#include<iostream>
using namespace std;
int main()
{
    int i,j,n;
    cout<<"Enter the order:-";
    cin>>n;
    for(i=1;i<=n;i++)
    {  
      int count=i;
      for(j=1;j<=i;j++)
      { 
        cout<<count;
        cout<<'\t';
        count++;
      }
      cout<<"\n";
    }
}