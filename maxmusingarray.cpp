#include<iostream>
#include<limits.h>
using namespace std;
int maximumMinimum(int a[],int size)
{
    int max=INT_MIN;
  for(int i=0;i<size;i++)
  {
    if(a[i]>max)
    {
        max=a[i];
    }
  }
  cout<<"The maximum element is"<<max;
}
int minimumMaximum(int a[],int size)
{
    int min=INT_MAX;
  for(int i=0;i<size;i++)
  {
    if(a[i]<min)
    {
        min=a[i];
    }
  }
  cout<<"The minimum element is"<<min;
}
int main()
{
    int arr[5],size;
  cout<<"Enter the elements of array:-";
  for(int i=0;i<5;i++)
  {
    cin>>arr[i];
  }
  size=sizeof(arr)/sizeof(int);
  maximumMinimum(arr,size);
  cout<<"\n";
  minimumMaximum(arr,size);
}