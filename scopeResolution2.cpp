#include<iostream>
using namespace std;
class GFG
{
  public:
  void test()
  {
    cout<<"It is the method of test function.";
  }
};
class GeeksForGeeks:public GFG
{
  public:
  void test()
  {
     GFG::test();
     cout<<"\n It is the test() function of the child class.";

  }
};
int main()
{
    GeeksForGeeks ch;
    ch.test();
    return 0;
}