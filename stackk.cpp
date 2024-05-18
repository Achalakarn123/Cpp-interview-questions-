#include <iostream>
#include <stack>
using namespace std;
class Stack
{
    public:
    int top;
    int *arr;
    int size;

    Stack(int size)
    {
        this->size = size;

        arr = new int[size];
        top = -1;
    }
    int push(int element)
    {
        if (size - top > 1)
        {
            top++;
            arr[top] = element;
            
        }
        else
        {
            cout << "Stack is overflows";
        }
        return 0;
    }
    int pop()
    {
        if (top >0)
        {
            top--;
        }
        else
        {
            cout << "Stack underflow";
            return -1;
        }
    }
    int peek()
    {
        if (top >= 0 && top < size)
            return arr[top];
        else
        {
            cout << "Stack underflow";
            return -1;
        }
    }
    bool isEmpty()
    {
        if (top == -1)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};

int main()
{

    Stack st(5);
    st.push(5);
    st.push(5);
    st.push(5);
    st.push(5);
    
    st.pop();
    cout << "Stack's top is:-";
   cout<<st.peek();
    return 0;
}