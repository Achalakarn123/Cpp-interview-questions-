/****
          1
         121
        12321
       1234321   
****/

#include <iostream>
using namespace std;
int main()
{
    int i, j,k,l,n;
    cout << "Enter the order-";
    cin >> n;
    for (i = 1; i <= n; i++)//2
    {
      
        for (j = n - i; j > 0; j--)
        {
            cout << ' ';
        }
        for (k = 1; k <= i; k++)
        {
            cout << '*';
        }
        for (l= i-1; l>0; l--)//
        {
            cout <<'*';
        }
        cout<<"\n";
    }
}