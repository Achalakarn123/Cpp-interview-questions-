#include<iostream>
using namespace std;
int variableValue=100;
class GFG
{
    public:
    int n;
    cout<<"Enter the value to the variable:-";
    cin>>n;
   void function()
   {
    cout<<"The square of number is :-"n*n;
   } 
}
int main()
{
    int variableValue=50;
    cout<<"The local variable value="<<variableValue<<"\n";
    cout<<"The global variable value="<<::variableValue;
    return 0;
}