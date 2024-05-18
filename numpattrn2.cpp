#include <iostream>
using namespace std;
int main()
{
    int i, j,n, cnt=1;
    cout << "Enter the order:-";
    cin >> n;
    for (i = 1; i <= n; i++) // 1 2 3  4 5 6  7 8 9
    {   
        for (j = 1; j <= n; j++)
        {
            cout << cnt;
            cnt+=1;
        }
        cout << "\n";
    }
}
// 1 2 3
// 4 5 6
// 7 8 9