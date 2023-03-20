#include <iostream>
using namespace std;
int main(){
    int testcase;
    cin>>testcase;
    while(testcase--){
        int X,Y;
        cin>>X>>Y;
        if(X<2*Y){
            cout<<X/2<<endl;
        }
        else{
            cout<<Y<<endl;
        }
    }
    return 0;
}


