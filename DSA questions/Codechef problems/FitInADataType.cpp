#include <iostream>
using namespace std;
int main(){
    int testcase;
    cin>>testcase;
    while(testcase--){
        int N,X;
        cin>>N>>X;
        if(X>N){
            while(X>N){
                X=X-N-1;
            }
            cout<<X<<endl;
        }
        else{
            cout<<X<<endl;
        }
    }
    return 0;
}

/*
#include <iostream>
using namespace std;
int main(){
    int testcase;
    cin>>testcase;
    while(testcase--){
        int N,X;
        cin>>N>>X;
        if(X>N){
            cout<<X<<endl;
        }
        cout<<(N%X)-1<<endl;
    }
    return 0;
}

*/
