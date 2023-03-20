#include <iostream>
using namespace std;
int main()
{
    char ch;
    float a,b,result;
    cout<<"Enter two numbers:";
    cin>>a>>b;
    cout<<"\n"<<"Enter the operator(+,-,/,*): ";
    cin>>ch;
    cout<<"\n";
    if (ch=='+')
    {
        result=a+b;
    }
    else
    {
        if (ch=='-')
        {
            result=a-b;
        }
        else
        {
            if (ch=='*')
            {
                result=a*b;
            }
        }
        else
        {
            if (ch=='/')
            {
                result=a/b;
            }
        }
        else
        {
            cout<<"Wrong Operator \n";
        }
        cout<<"\n"<<"The calculated result is: "<<result<<"\n";
        return 0;
    }   
}