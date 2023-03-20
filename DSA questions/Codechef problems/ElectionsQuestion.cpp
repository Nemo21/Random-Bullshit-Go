#include <iostream>
using namespace std;
int main(){
    int Testcase;
    cin>>Testcase;
    while(Testcase--){
        //party majority when votes strictly greater than 50
        int Xa,Xb,Xc;
        if(Xa>50){
            //cout A is majorit
            cout<<"A";
        }
        else if(Xb>50){
            //cout B is majorit
            cout<<"B";
        }
        else if(Xc>50){
            //cout C is majorit
            cout<<"C";
        }
        else{
            cout<<"NOTA";
        }
    }
    return 0;
}