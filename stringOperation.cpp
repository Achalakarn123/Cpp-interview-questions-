#include <iostream>
using namespace std;
int main()
{
    char ch[100];
    cin.getline(ch, 100);
    for (int i = 0; ch[i] != '\0'; i++)
    {
        cout << ch[i];
    }
}