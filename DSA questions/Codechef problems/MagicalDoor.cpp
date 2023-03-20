#include <iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int x=1;x<=t;x++){
        string str;
        cin>>str;
        int l=str.length();
        int ans=0;
        if(str[0]=='0'){
            ans=1;
        }
        for(int i=1;i<l;i++){
            if(str[i]!=str[i-1]){
                ans=ans+1;
            }
        }
        cout<<ans<<"\n";
    }
    return 0;
}