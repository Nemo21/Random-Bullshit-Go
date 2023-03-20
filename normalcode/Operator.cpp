#include <iostream>
using namespace std;
int main()
{
    long int x,y;
    char a;
    cout<<"Enter the numbers:";
    cin>>x>>y;
    cout<<"Enter any of the basic operators(+,-,/,*,%) to be performed on the numbers: ";
    cin>>a;
    switch (a)
    {
    case '+':
        cout<<"sum of numbers"<<x+y; 
        break;
    case '-':
        cout<<"difference of numbers"<<x-y;
        break;
    case '/':
        cout<<"division of numbers"<<x/y;
        break;
    case '*':
        cout<<"multiplication of numbers"<<x*y;
        break;
    case '%':
        cout<<"modulus of numbers"<<x%y;
        break;
    
}