/*  A
    B C
    D E F
    G H I J
*/
#include <iostream>
using namespace std;
int main()
{
    int i, j, n;
    cout << "Enter the order:-";
    cin >> n;
    char ch='A';
    for (i = 1; i <= n; i++)
    {
        
        for (j = 1; j <= i; j++)
        {
          cout << ch << ' ';
          ch++; 
        }
        cout << "\n";
    }
}