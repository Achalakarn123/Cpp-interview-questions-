/*
  containers and algorithms
  containers:1)sequence containers
  ---->array vector deque list forward_list
             2)container adaptive
  ---->stack queue priority queue
             3)associative containers
  ---->set map multiset multimap
             4)unordered associatives
  ---->unorderd set unorderd map unordered multiset unordered multimap 
*/
#include<iostream>
#include<array>
using namespace std;
int main()
{
  int basic[3]={1,2,3};
  array<int,3> a={7,8,9};
  int size=a.size();
  for(int i=0;i<size;i++)
  {
    cout<<a[i]<<endl;
  }
  cout<<"Element at 2nd index-->"<<a.at(2)<<endl;
  cout<<"Empty or not-->"<<a.empty()<<endl;
  cout<<"First Element-->"<<a.front()<<endl;
  cout<<"Last Element-->"<<a.back()<<endl;
}