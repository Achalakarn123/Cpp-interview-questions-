#include <iostream>
using namespace std;
int search(int arr[],int size,int key)
  {
    for(int i=0;i<size;i++)
     {
      if(arr[i]==key)
      {
       return 1;
      }
     }
  }
  int main()
  {
    int a[10],key,len;
    for(int i=0;i<10;i++)
    {
      cin>>a[i];
    }
    len=sizeof(a)/sizeof(int);
    cout<<"Enter the element of the number to find";
    cin>>key;
    if(search(a,len,key)==1)
    {
      cout<<"yes found";
    }
    else
    {
      cout<<"not found";
    }
    return 0;
  }