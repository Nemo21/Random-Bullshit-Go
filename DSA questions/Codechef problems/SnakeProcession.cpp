#include <iostream>
using namespace std;
int main(){
    int T;
    cin>>T;
    while(T--){
        string S;
        int N;
        cin>>N>>S;
        string P ="";
        for(int i=0;i<i<N;i++){
            if(S[i]!='.'){
                P+=S[i];
            }
        }
        S=P;
        N=S.size();
        if(N==0){
            cout<<"Valid"<<endl;
            return;
        }    
        bool isHead=1,isValid=1;
        for(int i=0;i<N;i++){
            if(isHead==1 && S[i]=='T'){
                isValid=0;
                break;
            }
            if(isHead==0 && S[i]=='H'){
                isValid=0;
                break;
            }
            isHead= !isHead;
        }
        if(isHead==0) isValid=0;
        cout<<(isValid ? "Valid":"Invalid")<<endl;
    }
    return 0;
}