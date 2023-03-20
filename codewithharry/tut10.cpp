#include <iostream>
using namespace std;
int main(){
    //what is a pointer? --> data type which holds the address of other data types
    int a=3;
    int* b=&a; //how pointer declared 
    // & --> (address of) operator
    cout<<b; //will print the address of b which is stored in the RAM
    // * (value at the address)dereferencing operator which will print the value of the variable which is being pointed at 
    cout<<*b; //will print the value of b which is pointing at the address of a 
    //pointer to pointer just nesting ig 
    return 0;
}