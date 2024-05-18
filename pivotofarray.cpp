#include<iostream>
using namespace std;
int findPivotElement(int arr[],int n)
{
    int ans;
    int s=0;
    int e=n-1;
    int mid=(s+(e-s)/2);
    while(s<e)
    {
        if(arr[mid]<arr[mid+1])
        {
          s=mid+1;
        }
        else
        {
          e=mid;
        }
       mid=(s+(e-s)/2); 
    }
    return s;
}
int main()
{
    int arr[5]={0,7,6,4,2};
    int size=sizeof(arr)/sizeof(arr[0]);
    cout<<findPivotElement(arr,size);
    return 0;
}