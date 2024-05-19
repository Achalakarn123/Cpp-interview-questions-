#include <iostream>
using namespace std;
class Animal
{
public:
    void characteristics()
    {
        cout << "This is the characteristics of animals"
             << "\n"
             << "They can walk with 4 legs"
             << "\n";
    }
};
class dog : public Animal
{
public:
    string name;
    void print()
    {
        cout << "name is:-" << name;
    }
    void characteristics()
    {
        Animal::characteristics();
        cout << "\n"
             << "Dogs can bark";
    }
};
int main()
{
    dog ch;
    ch.name = "Cow";
    ch.print();
    ch.characteristics();
    return 0;
}