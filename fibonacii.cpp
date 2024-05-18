#include <iostream>
using namespace std;
void fibo(int n) // 3
{
    int a, b, c = 0;
    a = 0;
    b = 1;
    cout << c<<"\t";
    for (int i = 1; i <= n; i++) // i=1
    {
        a = b;     // a=0
        b = c;     // b=1
        c = a + b; // c=1
        cout << c << "\t"; // c=0
    }
}
int main()
{
    int n;
    cout <<"Enter the value of n to find the fibonacci upto n:-";
    cin >> n; // n=3
    fibo(n);  // 3
    return 0;
}