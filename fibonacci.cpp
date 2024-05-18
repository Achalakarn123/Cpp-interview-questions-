#include <iostream>
using namespace std;
int main()
{
    int a = 0, b = 1, c = 0, n;
    cout << "Enter the value of n:-";
    cin >> n;
    cout << a << "\t" << b;
    for (int i = 1; i <= n; i++)
    {
        c = a + b;
        cout<<"\t" << c;
        a = b;
        b = c;
    }
    return 0;
}