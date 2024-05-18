#include <iostream>
using namespace std;
int main()
{
    int a, b;
    int i=11; 
    cout<<"a,b";
    cin>>a>>b;
    cout << "a&b" <<"\t"<<(a&b)<< endl;
    cout << "a|b" <<"\t"<<(a|b)<< endl;
    cout << "~a" <<"\t"<< ~a << endl;
    cout << "~b" <<"\t"<< ~b << endl;
    cout << "a^b" <<"\t"<<(a^b)<< endl;
    cout<<"a<<1"<<"\t"<<(a<<1)<<"\n"<<"b<<1 "<<"\t"<<(b>>1);
    cout<<"\n";
    cout<<a+(i++)<<"\t"<<i<<endl;
    cout<<a+(++i)<<"\t"<<i<<endl;
    cout<<a+(i--)<<"\t"<<i<<endl;
    cout<<a+(--i)<<"\t"<<i<<endl;
    return 0;
}