#include <iostream> 
// Two types of header files
// 1.System Header files:Comes with the compiler 
// 2.User Defined Header files: Written by the programmer 
// #include "file.h" will produce an error if file.h is not present in the current directory
using namespace std;
int main(){
    cout<<"Hello world program";
    return 0;
    int a=4,b=5;
    cout<<"Operators in C++";
    cout<<"1. Arithmatic operators";
    // Arithmatic operators 
    cout<<"sum is "<<a+b<<endl;
    cout<<"difference is "<<a-b<<endl;
    cout<<"product is "<<a*b<<endl;
    cout<<"division is "<<a/b<<endl;
    cout<<"mod is "<<a%b<<endl;
    // Increment and Decrement operator 
    cout<<"2.Increment and Decrement operators"
    cout<<"Post incremeant "<<a++<<endl; 
    // here value of a is 4 and then in the next line it is 5
    cout<<"Post decremeant "<<a--<<endl; 
    // here value of a is 5 and then in the next line it is 4 
    cout<<"Pre incremeant "<<++a<<endl; 
    // here first the value is incremented that is 5 nd then it is printed 
    cout<<"Pre decremeant "<<--a<<endl; 
    // here first the value is decremented that is 4 nd then it is printed
    cout<<"3.Assignment operators"<<endl;
    // Assignment Operators --> used to assign values to variables
    int c=6,d=7;
    char e='e';
    cout<<"4.Comparison operators";
    // Comparison operators 
    cout<<"if a==b"<<a==b<<endl;
    cout<<"if a>=b"<<a>=b<<endl;
    cout<<"if a>b"<<a>b<<endl;
    cout<<"if a<b"<<a<b<<endl;
    cout<<"if a<=b"<<a<=b<<endl;
    cout<<"if a!=b"<<a!=b<<endl;
    // Logical operators 
    cout<<"if ((a==b) || (a<b))"<<((a==b) || (a<b))<<endl;
    // this is "or" operator 
    cout<<"if ((a==b) && (a<b))"<<((a==b) && (a<b))<<endl;
    // this is "and" operator
    cout<<"if (!(a==b))"<<(!(a==b))<<endl;
    // this is "not" operator




}