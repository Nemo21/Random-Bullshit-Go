#include <iostream>
using namespace std;
int main(){
    int testcase;
    cin>>testcase;
    while(testcase--){
        int A,B,C;
        cin>>A;
        cin>>B;
        cin>>C;
        if(A+B==C || B+C==A || C+A==B){
            cout<<"YES";
        }
        else{
            cout<<"NO";
        }
    }
    return 0;
}