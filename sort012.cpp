#include<iostream>
using namespace std;
int main()
{
    int arr[5]={0,1,0,1,2};
    int count0=0,count1=0,count2=0;
   int i;
   for(i=0;i<5;i++)
   {
      if(arr[i]==0)
      {
         count0++;
      }
      if(arr[i]==1)
      {
         count1++;
      }
      if(arr[i]==2)
      {
         count2++;
      }
   }
   for (i = 0; i < count0; i++) 
   {
      cout << arr[i];
   }
   for (i = count0; i < count1; i++) {
      cout << arr[i];
   }
   for (i = count1; i < count2; i++) {
      cout << arr[i];
   }
   return 0;
}
