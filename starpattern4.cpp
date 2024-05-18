#include<iostream>
using namespace std;
int main()
{
    int i=1,count=1,n;
    cout<<"Enter the value of n:-";
    cin>>n;
    while(i<=n) 
    {
        int j=1;
        while(j<=n)
        {
            cout<<count;
           cout<<'\t';
            count++;
            j++;
        }
      i++;
       cout<<"\n";
    }
}