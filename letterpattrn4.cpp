/*  A
    B B
    C C C
*/
#include <iostream>
using namespace std;
int main()
{
    int i, j, n;
    cout << "Enter the order:-";
    cin >> n;
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= i; j++)
        {
          char ch='A'+i-1;
          cout << ch << ' ';
          ch++; 
        }
        cout << "\n";
    }
}