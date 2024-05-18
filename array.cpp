#include <iostream>
using namespace std;
int main()
{
    int l, arr[5], max;
    cout << "Enter the array elements:-";
    for (int i = 0; i <5; i++)
    {
        cin >> arr[i];
    }
    l = sizeof(arr) / sizeof(int);
    max = arr[0];
    for (int i = 0; i < l; i++)
    {
        cout << arr[i] << "\n";
    }
    for (int i = 0; i < l; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    cout << "maximum element is" << max;
}