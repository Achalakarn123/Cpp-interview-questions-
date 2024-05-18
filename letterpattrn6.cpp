/*             i   j
    D          1   4          i=j    n-i+A='D'
    C D        2   3 4         D
    B C D      3   2 3 4       
    A B C D    4   1 2 3 4
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
         ch='A'+n-i;
        for (j = 1; j <= i; j++)
        {
           
            cout << ch;
             ch++;
        }
        cout << "\n";
    }
}