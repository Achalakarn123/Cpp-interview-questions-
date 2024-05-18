#include<iostream>
#include<stack>
using namespace std;
int main()
{
    stack<int> st;    //LIFO(last in first out)
    st.push(1);
    st.push(5);
    st.push(2);
    st.push(5);
    st.push(8);
    while(!st.empty())
    {
      cout<<st.top(); 
      st.pop();  
      cout<<"\t";
    }
    return 0;
}