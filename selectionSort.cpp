#include<iostream>
using namespace std;
int selectionSort(int arr[],int n)
{
     for(int i=0;i<n;i++)
    {
        int minimumIndex=i;
        for(int j=i+1;j<n;j++)
        {
          if(arr[i]>arr[j])
          {
            minimumIndex=j;
          }
          swap(arr[minimumIndex],arr[i]);
        }
    }
    
}
int  main()
{
    int arr[5]={1,9,5,7,4};
    int n=sizeof(arr)/sizeof(arr[0]);
    selectionSort(arr,n);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i];
    }
    return 0;
}