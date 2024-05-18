#include <iostream>
#include <limits.h>
using namespace std;
int maxim(int a[], int len)
{
    int maxy = INT_MIN;
    for (int i = 0; i < len; i++)
    {
        maxy = max(maxy, a[i]);
    }
    return maxy;
}
int minim(int a[], int len)
{
    int miny = INT_MAX;
    for (int i = 0; i < len; i++)
    {
        miny = min(miny, a[i]);
    }
    return miny;
}
int main()
{
    int arr[10], lth;
    cout<<"Enter the array elements:-";
    for (int i = 0; i < lth; i++)
    {
        cin >> arr[i];
    }
    lth=sizeof(arr)/sizeof(int);
    cout <<"Maximum term is:-"<<maxim(arr, lth);
    cout <<"Minimum term is:-"<<minim(arr, lth);
    return 0;
}