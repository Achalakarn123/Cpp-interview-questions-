#include<iostream>
#include<array>
using namespace std;
int main()
{
    array<int,4> a={1,2,3,4};
    int n=a.size();
    cout<<"The elements of the array are :-";
    for(int i=0;i<n;i++)
    {
      cout<<a[i]<<"\t";
    }
    cout<<"\n"<<"The element at the 2nd position is "<<a.at(2)<<endl;
    cout<<"The first element is "<<a.front()<<endl;
    cout<<"The element at last is "<<a.back()<<endl;
    cout<<"Empty or not "<<a.empty();
    return 0;
}