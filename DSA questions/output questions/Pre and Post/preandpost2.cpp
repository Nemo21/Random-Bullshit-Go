#include <iostream>
using namespace std;
int main(){
    int a=1;
    int b=2;
    if(a-->0 && ++b>2){
        cout<<"Stage1-Inside If";
    }
    else{
        cout<<"Stage2-Inside Else";
    }
    cout<<endl;
    cout<< a <<" "<< b <<endl;
    return 0;
}

//output
// Stage1-Inside IF
// 0 3 