#include <iostream>
#include <iomanip>
using namespace std;
int main(){
    int a=34;
    cout<<a<<endl;
    a=45;
    int b=65,c=67;
    cout<<a<<endl;
    // constants in C++
    const float pie=3.14;
    cout<<pie; 
    //value cant be changed of pie since its a constant by const keyword

    //manipulators-> endl,setw
    // setw from iomanip library
    cout<<"value of a is "<<setw(4)<<a<<endl;
    // setw(x) will take the width of x spaces 
    cout<<"value of b is "<<setw(4)<<b<<endl;
    cout<<"value of c is "<<setw(4)<<c<<endl;

    cout<<"value of a is "<<a<<endl;
    cout<<"value of b is "<<b<<endl;
    cout<<"value of c is "<<c<<endl;

    //Operator precedence 
    int o=9,r=10;
    int y=o*5+r;
    cout<<<<"Value of y is: "y<<endl;
    //for precedence table  refer cpp reference for operator 
    //when operator precedence is same we check associativity nd then the expression is evaluated in that order

    return 0;
    











}