#include <iostream>
using namespace std;
int main(){
    int Testcase;
    cin>>Testcase;
    for (int i=0;i<Testcase;i++){
        int a,b,c;
        cin>>a>>b>>c;
        if(a+b+c==180){
            cout<<"YES";
        }
        else{
            cout<<"NO";
        }
    }
    return 0;
}