#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class Person
{
    public:
    string name;
    void print()
    {
      cout<<"Name of Person is:-"<<name;  
    }
};
int main()
{
    Person obj;
    obj.name="Achala";
    obj.print();
    return 0;
}