#include <iostream>
using namespace std;
int calculator(int a, int b, char op)
{
    switch (op)
    {
    case '+':
        cout << a + b;
        break;
    case '-':
        cout << a - b;
        break;
    case '*':
        cout << a * b;
        break;
    case '/':
        cout << a / b;
        break;
    }
}
int main()
{
    int a, b;
    char op;
    cout << "Enter the value of a & b";
    cin >> a;
    cin >> b;
    cout << "Enter the operation";
    cout << "1.+  2.- 3.* 4. /";
    cin >> op;
    calculator(a, b, op);
    return 0;
}