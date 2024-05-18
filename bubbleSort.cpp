#include<iostream>
#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
int bubbleSort(int arr[],int n)
{
    for(int i=1;i<n;i++)
    {
        bool swapped=false;
        for(int j=0;j<n-i;j++)
        {
          if(arr[j]>arr[j+1])
          {
            swap(arr[j],arr[j+1]);
            swapped=true;
          }
        }
        if(swapped==false)
          {
            break;
          }
    }
}
int main()
{
    int arr[5]={1,9,5,7,4};
    int n=sizeof(arr)/sizeof(arr[0]);
    bubbleSort(arr,n);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i];
    }
    return 0;
}

