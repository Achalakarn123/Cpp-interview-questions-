#include <iostream>
using namespace std;
int max(int a[], int size)
{
    int max = a[0];
    for (int i = 0; i < size; i++)
    {
        if (a[i] > max)
        {
            max = a[i];
        }
    }
    cout << "maximum element is" << max;
}
int min(int a[], int size)
{
    int min = a[0];
    for (int i = 0; i < size; i++)
    {
        if (a[i] < min)
        {
            min = a[i];
        }
    }
    cout << "minimum element is " << min;
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
    max(a, size);
    cout<<endl;
    min(a, size);
    return 0;
}