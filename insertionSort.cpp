#include<iostream>
#include<vector>
using namespace std;
int insertionSort(vector<int>&arr,int n)
{
  for(int i=1;i<n;i++)
  {
    int j=i-1;
    int temp=arr[i];
    for(;j>=0;j--)
    {
        if(arr[j]>temp)
        {
           arr[j+1]=arr[j];
        }
        else
        {
            break;
        }
    }
    arr[j+1]=temp;
  }
}
int main()
{
    vector<int>arr {1,4,3,8,9,7};
    int n=arr.capacity();
    insertionSort(arr,n);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i];
    }
    return 0;
}