#include <iostream>
using namespace std;
int main(){
    int r,o,c;
    cin>>r>>o>>c;
    int rem=20-o;
    int mxr=36*rem;
    if(c+mxr>r){
        cout<<"YES\n";
    }
    else{
        cout<<"NO\n";
    }
    return 0;
}