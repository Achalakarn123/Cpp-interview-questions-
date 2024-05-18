/*  A B C
    C D E
    D E F
*/
#include <iostream>
using namespace std;
int main()
{
    int i, j, n;
    char ch;
    cout << "Enter the order:-";
    cin >> n;
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n; j++)
        {
            ch='A'+i+j-2;
            cout << ch << ' ';
           
        }
        cout << "\n";
    }
}