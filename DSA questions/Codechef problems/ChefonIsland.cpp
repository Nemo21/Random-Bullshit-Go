#include <iostream>
using namespace std;
int main(){
    int testcase;
    cin>>testcase;
    while(testcase--){
        int x,y,xr,yr,d;
        cin>>x>>y>>xr>>yr>>d;
        if((xr*d)<=x && (yr*d)<=y){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}