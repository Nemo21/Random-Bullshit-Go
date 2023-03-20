#include <iostream>
using namespace std;
int main(){
     int Testcase;
    cin>>Testcase;
    int count=0;
    for (int i=0;i<Testcase;i++){
        int c1,c2,c3;
        cin>>c1>>c2>>c3;
        if(c1+c2+c3>=2){
            count=count+1;
        }
    }
    cout<<count;
    return 0;
}