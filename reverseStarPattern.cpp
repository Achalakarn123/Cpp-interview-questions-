/*****
                *
            *   *
        *   *   *
    *   *   *   *
 *  *   *   *   *

******/
#include <iostream>
using namespace std;
int main()
{
    int i, j, k, n;
    cout << "Enter the order:-" << endl;
    cin >> n;
    for (i = 1; i <= n; i++)
    {
        for (j = n - i; j >= 1; j--)

        {
            cout <<' ';
            cout <<"\t";
        }
        for (k = 1; k <= i; k++)
        {   
            cout <<'*';
             cout <<"\t";
        }
        cout << "\n";
    }
}
