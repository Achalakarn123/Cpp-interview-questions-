#include <iostream>
using namespace std;
int main()
{
    int n = 123;
    int ans = 0;
    int rem;
    int temp = n;
    while (n>0)
    {
        rem = n % 10;
        ans = ans * 10 + rem;
        n = n / 10;
    }
    if (temp == n)
    {
        cout << temp << "is Pallindrome";
    }
    else
    {
        cout << temp << "is not Pallindrome";
    }
    return 0;
}