#include<iostream>
using namespace std;
int selectionSort(int arr[],int n)
{
    for(int i=0;i<n-1;i++)
    {
      for(int j=i+1;j<n;j++)
      {
        if(arr[j]<arr[i])
        {
            swap(arr[i],arr[j]);
        }
      }
    }
    return 0;
}
int printArray(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}
int main()
{
    int arr[5]={6,7,3,2,9};
    int n=sizeof(arr)/sizeof(int);
    selectionSort(arr,n);
    printArray(arr,n);
    return 0;
}