/****
 
  ****
   ***
    **
     *
     
****/
#include <iostream>
using namespace std;
int main()
{
    int i, j, k, n;
    cout << "Enter the order:-" << endl;
    cin >> n;//n=4
    for (i = 1; i <= n; i++)//i=1 i=2 i=3
    {
        for (j = 0; j <i-1; j++)//j=1-1=0 2-1 3-1

        {
            cout <<' ';
            
        }
        for (k =n-i+1; k >=1; k--)//4-2+1 
        {   
            cout <<'*';
             
        }
        cout << "\n";
    }
}
