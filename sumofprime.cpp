#include<iostream>
using namespace std;
int isPrime(int n)
{
  if(n<=1)
  {
    return false;
  }
  for(int i=2;i<=n/2;i++)
  {
    if(n%i==0)
    {
      return false;
    }
  }
  return true;
}
int main()
{
  int n;
  cout<<"Enter the number";
  cin>>n;
  int count=0;
  for(int i=2;i<=n;i++)
  {
  if(isPrime(i))
  {
     count+=i;
  }
  }
  cout<<"The sum is"<<count;
}