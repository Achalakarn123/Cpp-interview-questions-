#include <iostream>
using namespace std;
int findSqrt(int n)
{
    int s = 0;
    int e = n;
    long long int ans = -1;
    long long int mid = s + (e - s) / 2;
    while (s <= e)
    {
        long long int square = mid * mid;
        if (square == n)
        {
            return mid;
        }
        if (square < n)
        {
            ans = mid;
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
        mid = s + (e - s) / 2; 
    }
    return ans;
}
double Sqrt(int res, int precison, int n)
{
    double ans = res;
    double factor = 1;
    for (int i = 0; i < precison; i++)
    {
        factor = factor / 10;
        for (double j = ans; j * j < n; j = j + factor)
        {
            ans = j;
        }
    }
    return ans;
}
int main()
{
    int n;
    cout << "Enter the number to find the square root:-";
    cin >> n;
    int res = findSqrt(n);
    cout << "More precisely we get the square root as:-" << Sqrt(res, 3, n);
    return 0;
}
