#include<iostream>
using namespace std;
int sqrt(int n)
{
    int s = 0;
    int e = n;
    long long int mid = s + (e - s) / 2;
    long long int ans = -1;
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
double morePrecison(int n, int precison, int sqroot)
{
    double factor = 1;
    double ans = sqroot;
    for (int i = 0; i < precison; i++)
    {
        factor = factor / 10; // factor*0.1
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
    cout << "Enter a number:-";
    cin >> n;
    int sqroot = sqrt(n);
    cout << "Answer is:-" << morePrecison(n, 3, sqroot);
    return 0;
}
