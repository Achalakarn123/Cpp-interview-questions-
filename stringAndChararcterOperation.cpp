#include <iostream>
using namespace std;
char toLower(char ch)
{
    if (ch >= 'a' && ch <= 'z')
    {
        return ch;
    }
    else
    {
        char temp = ch - 'A' + 'a';
        return temp;
    }
}
int lengthOfCharacterArray(char name[])
{
    int length = 0;
    for (int i = 0; name[i] != '\0'; i++)
    {
        length++;
    }
    return length;
}
void reverse(char name[], int length)
{
    int s = 0;
    int e = length - 1;
    while (s < e)
    {
        swap(name[s++], name[e--]);
    }
}
bool palindrome(char s[], int len)
{
    int st = 0;
    int e = len - 1;
    while (st < e)
    {
        if (!isalnum(tolower(s[st])))
        {
            st++;
        }
        else if (!isalnum(tolower(s[e])))
        {
            e--;
        }
        else if (tolower(s[st]) != tolower(s[e]))
        {
            return false;
        }
        else
        {
            st++;
            e--;
        }
    }
    return true;
}
int main()
{
    char name[10];
    cout << "Enter the name:-";
    cin >> name;
    int a;
    a = lengthOfCharacterArray(name);
    cout << "Array is of size:-" << a << endl;
    reverse(name, a);
    cout << "reverse of your name is:-" << name << endl;
    if (palindrome(name, a))
    {
        cout << "S";
    }
    else
    {
        cout << "No";
    }
    return 0;
}