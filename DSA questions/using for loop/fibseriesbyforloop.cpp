#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the number till the series is to printed";
    cin>>n;
    int a=0; //first number of the fib series
    int b=1; //second number of the fib series 
    cout<<a<<" "<<b<<" ";
    for(int i=1;i<=n;i++){
        int nextnumber=a+b;
        cout<<nextnumber<<" ";
        a=b;
        b=nextnumber;
    }

    return 0;
}