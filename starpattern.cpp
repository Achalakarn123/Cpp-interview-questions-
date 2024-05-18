#include <iostream>
using namespace std;
int main()
{
    int i, j, k, n;
    cout << "Enter the order of star pattern:-";//3
    cin >> n;                // order=3
    for (i = 1; i <= n; i++) // i=1
    {
        for (j = 1; j <= n - i; j++)//j=1 j=2
        {
            cout << ' ';//   
        }
        for (k = 1; k <= i; k++)
        {
            cout << '*'<<' ';
        }
        cout << endl;
    }
     for (i = n-1; i >=1; i--) // i=1
    {
        for (j = 1; j <= n - i; j++)//j=1 j=2
        {
            cout << ' ';//   
        }
        for (k = 1; k <= i; k++)
        {
            cout << '*'<<' ';
        }
        cout << endl;
    }
}