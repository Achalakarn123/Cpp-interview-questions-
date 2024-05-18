#include<iostream>
#include<stack>
using namespace std;
int main()
{
    stack<int> st;    //LIFO(last in first out)
    st.push(10);
    st.push(20); 
    while(!st.empty())
    {
      cout<<st.top(); 
      st.pop();  
      cout<<"\n";
    }
    return 0;
}
