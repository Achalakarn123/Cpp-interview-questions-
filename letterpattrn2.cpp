/*  A B C
    D E F
    G H I
*/
#include <iostream>
using namespace std;
int main()
{
    int i, j, n;
    char ch = 'A';
    cout << "Enter the order:-";
    cin >> n;
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n; j++)
        {
            cout << ch << ' ';
            ch = ch + 1;
        }
        cout << "\n";
    }
}