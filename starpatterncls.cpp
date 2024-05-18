#include <iostream>
using namespace std;
int main()
{
    int i, j, k, space, l, n;
    cout << "Enter the row:-";
    cin >> n;  
    space=2*n-2;             // n=3
    for (i = 0; i < n; i++) // i=1
    {
        for (j = 0; j < i; j++) // j=1
        {
            cout << '*'; //* ** ***
        }
        for (k = 0; k < space; k++) // k=0
        {
            cout << ' '; //
        }
        for (l = 0; l < i; l++)
        {
            cout << '*';
        }
        space--;
    }
    space = 0;
    for (i = n; i > 0; i--) // i=1
    {
        for (j = 0; j < i; j++) // j=1
        {
            cout << '*'; //* ** ***
        }
        for (k = 0; k < space; k++) // k=0
        {
            cout << ' '; //
        }
        for (l = 0; l < i; l++)
        {
            cout << '*';
        }
        space--;
    }
    cout << endl;
    return 0;
}
