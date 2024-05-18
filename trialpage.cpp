#include <iostream>
using namespace std;
int pivotArray(int arr[], int n)
{
    int s = 0;
    int e = n - 1;
    int mid=s+(e-s)/2;  
    if (arr[mid] >= arr[0])
    {
       s=mid++; 
    }
    else
    {
        e=mid;
    }
    mid=s+(e-s)/2;
    return s;
}
int main()
{
    int arr[] = {7,9,1,2,3};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout<<pivotArray(arr, n);
    return 0;
}