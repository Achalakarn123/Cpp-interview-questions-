#include <iostream>
using namespace std;
int main()
{
    int a, b, c;
    cout << "Enter the value of a ,b & c"
         << "\n";
    cin >> a >> b >> c;
    cout << "\n"
         << a << ' ' << b << ' ' << c;
    cout << "\n";
    if (a > b && a > c)
    {
        cout << a << "is greatest"
             << "\n";
    }
    else if (b > c)
    {
        cout << b << "is greatest"
             << "\n";
    }
    else
    {
        cout << c << "is greatest"
             << "\n";
    }
}