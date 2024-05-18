#include <iostream>
#include<limits.h>
using namespace std;
int MAX(int a[], int size)
{
    
    int maxim = INT_MIN;
    for (int i = 0; i < size; i++)
    {
       maxim=max(maxim,a[i]);
        /*
        if (a[i] > MAX)
        {
            MAX = a[i];
        }
        */
    }
    return maxim;
}
int MIN(int a[], int size)
{
    int minim = INT_MAX;
    for (int i = 0; i < size; i++)
    {
        minim=min(minim,a[i]);
         /*
        if (a[i] < minim)
        {
            MIN = a[i];
        }
        */
    }
  return minim;
}
int main()
{
    int a[10];
    int i;
    int size = sizeof(a) / sizeof(int);
    cout<<"Enter the array elements:-";
    for (i = 0; i < size; i++)
    {
        cin >> a[i];
    }
    cout << "maximum element is" <<MAX(a, size)<<endl;
    cout << "minimum element is " <<MIN(a, size)<<endl;
    return 0;
}