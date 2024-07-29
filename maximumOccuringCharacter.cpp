/*
   Achala
   a=3
   c=1
   h=1
   l=1
   maximum ocurring character=3
*/
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
char toLower(char ch)
{
    char temp;
    if ((ch >= 'a' && ch <= 'z') || (ch >= '0' && ch <= '9'))
    {
        return ch;
    }
    else
    {
        temp = ch - 'A' + 'a';
        return temp;
    }
}
char maximumOccuringCharacter(string s)
{
    int arr[26] = {0};
    for (int i = 0; i < s.length(); i++)
    {
        char ch = s[i];
        int number = 0;
        if (ch >= 'a' && ch <= 'z')
        {
            number = ch - 'a';
        }
        arr[number]++;
    }
    for (int i = 0; i < s.length(); i++)
    {
        int maxi = -1, ans = 0;
        int st = 0;
        int e = s.length();
        for (int i = 0; i < e; i++)
        {
            if (maxi < arr[i])
            {
                ans = i;
                maxi = arr[i];
            }
        }
        return 'a' + ans;
    }
}
int main()
{
    string newS;
    string s = "Achala";
    for (int i = 0; i < s.length(); i++)
    {
        newS.push_back(toLower(s[i]));
    }
    cout << maximumOccuringCharacter(newS);
    return 0;
}