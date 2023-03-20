#include <iostream>
using namespace std;
int c=45;
int main(){
    // built in data types
    int a,b,c;
    cout<<"Enter the values of a,b";
    cin>>a>>b;
    c=a+b;
    cout<<"The value of c is: "<<c;
    //this is local c
    cout<<"value of global c is"<<::c;
    // global scope by :: 

    // double,long literals
    cout<<sizeof(34.4f);
    //f denotes float 
    cout<<sizeof(34.4F);
    cout<<sizeof(34.4l);
    //l denotes long double 
    cout<<sizeof(34.4L);
    cout<<sizeof(34.4);

    //reference variables x is the original variable and y is the reference variable that points to x's value i.e 455
    float x=455;
    float &y=x;

    //type casting
    int p=45;
    c=float(p);
}