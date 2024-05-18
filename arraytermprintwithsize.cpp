#include<iostream>
using namespace std;
int printArray(char arr[],int size)
{
  for(int i=0;i<size;i++) 
  {  
    cout<<arr[i]<<endl;
  }
  //value at index 9
  cout<<"value at index 9 is"<<arr[9];
  return 0;
}
int main()
{ 
    char arr[10];
    int size;
    int i;
    size=sizeof(arr)/sizeof(char);
    cout<<"Enter the array elements:-";
    for(i=0;i<size;i++)
    {
        cin>>arr[i];
    }
    printArray(arr,size); 
    return 0; 
}
