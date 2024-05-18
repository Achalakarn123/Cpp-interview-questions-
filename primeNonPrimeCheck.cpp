#include<iostream>
using namespace std;
int checkPrime(int n)
{
    int count=0;
  for(int i=2;i<=n/2;i++)
  {
    if(n%i==0)
    {
        count++;
        break;
    }
  }
  if(count==0)
  {
    cout<<n<<"is prime";
  }
  else
  {
    cout<<n<<"is not prime";
  }
}
int main()
{
    int n;
    cout<<"Enter the number to check prime";
    cin>>n;
    checkPrime(n);
    return 0;
}