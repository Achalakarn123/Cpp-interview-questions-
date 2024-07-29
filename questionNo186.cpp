/*
Input:-My name is Achala
Output:-yM eman si alahcA
*/
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
string reversedString(string s)
{
    int st = 0;
    int e = s.length() - 1;
    while (st < e)
    {
        swap(s[st++],s[e--]);
    }
    return s;
}

int main()
{
    string s = "My name is Achala";
    string temp = reversedString(s);
    cout<<temp;
    return 0;
}