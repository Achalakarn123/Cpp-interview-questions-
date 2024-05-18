#include<iostream>
using namespace std;
bool isSumOfPrime(int n) 
{
    int count = 0;
    if (n <= 1)
    {
        return false;
    }
    for (int i = 2; i <= n/2; i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
        return true;
}

int main() {
    int n;
    int count = 0;
    cin >> n;
    for (int i = 2; i <= n; i++) 
    {
        if (isSumOfPrime(i)) 
        {
            count = count + i;
        }
    }
    cout << "The sum of prime numbers is " << count;
    return 0;
}
