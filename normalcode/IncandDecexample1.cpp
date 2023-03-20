#include <iostream>
using namespace std;
int main()
{
    int a=10,b;
    a++;
    b=a++;
    cout<<a<<endl<<b<<endl;
    ++a;
    cout<<a<<endl;
    a--;
    b=--a;
    cout<<a<<endl<<b<<endl;
}