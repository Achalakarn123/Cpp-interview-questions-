#include<iostream>
using namespace std;
int power(int x,int y);
int main()
{
    int x,y,i;
    cout<<"Enter the values of the number and the power:-";
    cin>>x>>y;
    cout<<power(x,y);
    return 0;
}
int power(int x,int y)
{     
      int i,ans=1;
      for(i=1;i<=y;i++)
      {
        ans=ans*x;
      } 
    return ans;
}