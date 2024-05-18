#include <iostream>
using namespace std;
void sortZeroesAndOnes(int input[], int n)
{
    int i = 0;      // Initialize a i pointer
    int j = n - 1;  // Initialize a j pointer
    while (i < j) 
    {
        // Move the i pointer to the j until we find a 1
        while (input[i] == 0 && i < j)
        {
            i++;
        }
        // Move the j pointer to the i until we find a 0
        while (input[j] == 1 && i < j) 
        {
            j--;
        }
        // Swap the elements at i and j
        if (i < j)
        {
            int temp = input[i];
            input[i] = input[j];
            input[j] = temp;
        }
    }
}
  
int main()
{
    int input[5];
    int n = 5;
    for (int i = 0; i < n; i++)
    {
        cin >> input[i];
    }
    cout << sortZeroesAndOnes(input, n);
    return 0;
}