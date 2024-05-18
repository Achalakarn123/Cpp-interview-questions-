#include<iostream>
using namespace std;
int sumOfArray(int a[],int size,int sum)
{
   for(int i=0;i<10;i++)
  {
    sum=sum+a[i];
  }
  return sum;
}
int main()
{
  int a[10],sum=0;
  for(int i=0;i<10;i++)
  {
    cin>>a[i];
  }
  int size=sizeof(a)/sizeof(int);
  cout<<sumOfArray(a,size,sum);
  return 0;
}