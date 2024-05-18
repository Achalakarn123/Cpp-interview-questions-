#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int n, bit, ans = 0;
    cout << "Enter a binary number:-";
    cin >> n; // 100
    int i = 0;
    while (n != 0)
    {
        bit = n % 10;
        if (bit == 1)
        {
            ans = ((bit * pow(2, i)) + ans);
        }
        n = n / 10;
        i++;
    }

    cout << ans;
    return 0;
}