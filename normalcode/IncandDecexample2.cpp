#include <iostream>
using namespace std;
int main()
{
    int a=22,c,d;
    a++;
    cout<<a<<endl;
    int b=a++;
    cout<<b<endl;
    c=a--;
    d=--a;
    cout<<a<<endl;
    cout<<b<<endl;
    cout<<c<<endl<<d<<endl;
}