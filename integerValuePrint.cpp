#include <iostream>
using namespace std;
int main()
{
    float n;
    cout << "Enter the number:-";
    cin >> n;
    int c;
    cout << "Enter choice in 1)integer 2)floating point number:-";
    cin >> c;
    switch (c)
    {
    case 1:
        cout << "The value is" << n;
        break;
    case 2:
        cout << "The value is" <<" "<<static_cast<int>(n);
        break;
    default:
        cout << "wrong";
        break;
    }
    return 0;
}