/*
      1 2 3 4 5 5 4 3 2 1
      1 2 3 4 * * 4 3 2 1
      1 2 3 * * * * 3 2 1
      1 2 * * * * * * 2 1
      1 * * * * * * * * 1
*/

#include <iostream>
using namespace std;
int main()
{
    int i, j, k,l, n;
    cout << "Enter the order:-";
    cin >> n;
    for (i = 1; i <= n; i++) // 1
    {
        for (j = 1; j <= n - i + 1; j++)
        {
            cout << j;
        }
         for(k =2*i-2; k>0;k--) 
        {
            cout <<'*';
        }
         for(l =n-i+1; l>0;l--) 
        {
            cout <<l;
        }

        cout << "\n";
    }

    return 0;
}