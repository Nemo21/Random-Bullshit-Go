#include <iostream>
using namespace std;
int glo=6;
void sum(){
    int l;
    cout<<glo; //for this fxn glo=6 it doesnt know the existence of glo in the main fxn
}
int main(){
    // int a=10;
    // int b=12;
    // float pi=3.14;
    sum();
    int glo=9;
    glo=78;
    // true is 1,false is 0
    //local variable is being changed
    cout<<glo;
    // precidence of local variable is higher than global variable 
    // \n is escape sequence for a line break 
    // use only one letter in "char" nd if more than one is used then the last letter will be displayed as output 
    return  0;
} 