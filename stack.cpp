                                  #include <iostream>
#include<stack>
using namespace std;
class Stack{
    //properties
    public;
    int *arr;
    int top;
    int size;

    //behaviour
    Stack(int size)
    {
        this->size=size;
        arr=new int[size];
        top=-1;
    }
    void push(int element)
    {
       if(size-top>1)
       {
        top++;
        arr[top]=element;
       }
       else{
        cout<<"Stack overflow";
       }
    }
    void po()
    {

    }
    int peek()
    {

    }
    bool isEmpty()
    {

    }
}
int main()
{
    stack<int>s;
    s.push(2);
    s.push(3);
    s.push(5);
    s.pop();
    s.pop();
    cout << "The top most element in "
         << "\t" << s.top();
    if (s.empty())
    {
        cout << "Stack is empty";
    }
    else
    {
        while (!s.empty())
        {
            cout << "The elements of stack are" << endl;
            cout << s.top();
            s.pop();
            cout << "\n";
        }
    }
    return 0;
}
