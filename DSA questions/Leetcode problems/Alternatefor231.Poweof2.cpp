#include <iostream>
using namespace std;
int main(){
    int count=0;
    int n;
    while(n!=0){
        if(n&1){
            count++;
        }
        n=n>>1;
    }
    if(count==1){
        cout<<"Yes can be expressed in power of 2"<<endl;
    }
    else{
        cout<<"No cant be expressed in power of 2"<<endl;
    }
    
}