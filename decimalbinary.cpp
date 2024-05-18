#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int n, bit, ans = 0;
    cout << "Enter a decimal number:-";
    cin >> n;//5
    int i = 0;//0
    while (n != 0)
    {
        bit = n & 1;//5-101&1=001   bit=1   0    10&1=0-*/
        ans = ((bit * pow(10, i)) + ans);//1*10^0=1  0*10^1+1=1
        n = n >> 1;//101>>1=010
         i++;
    } 
    cout << ans;
    return 0;
}