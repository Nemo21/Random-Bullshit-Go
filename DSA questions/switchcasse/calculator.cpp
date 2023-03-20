#include <iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"Enter the first value"<<endl;
    cin>>a;
    cout<<"Enter the second value"<<endl;
    cin>>b;
    char op;
    cout<<"Enter the operation we want to perform"<<endl;
    cin>>op;
    switch (op)
    {
    case '+':
        cout<<"This is the sum"<<a+b<<endl;
        break;
    case '-':
        cout<<"This is the sum"<<a-b<<endl;
        break;
    case '*':
        cout<<"This is the sum"<<a*b<<endl;
        break;
    case '/':
        cout<<"This is the sum"<<a/b<<endl;
        break;
    case '%':
        cout<<"This is the sum"<<a%b<<endl;
        break;
    default:
        cout<<"Enter a valid operation"<<endl;
        break;
    }
    return 0;
}