#include<iostream>
#include<vector>
using namespace std;
int main() 
{
  vector<int>v;
  vector<int>a(5,1);
  vector<int>last(a);
  cout<<"print a:-";
  for(int i:a)
    {
      cout<<i<<" ";
    }
  cout<<"\n"<<v.capacity()<<"\n";
  v.push_back(1);
  v.push_back(2);
  v.push_back(3);
  v.push_back(4);
  v.push_back(5);
  v.push_back(6);
  cout<<v.capacity()<<endl;
  cout<<v.front()<<endl;
  cout<<v.back()<<endl;
  cout<<v.empty();
}