#include <bits/stdc++.h>
 
using namespace std;
 
#define ll              long long
#define pb              push_back
#define mp              make_pair
#define ff              first
#define ss              second
#define pii             pair<ll,ll>
#define vi              vector<ll>
#define vt(type)        vector<type>
#define si              set<ll>
 
void solve(){
    // string s;
    // cin>>s;
    // int c1=0,c2=0,c3=0;
    // for(int i=0;i<s.size();i++){
    //     if(s[i]=='1'){
    //         c1++;
    //     }
    //     if(s[i]=='2'){
    //         c2++;
    //     }
    //     if(s[i]=='3'){
    //         c3++;
    //     }
    // }
    // for(int i=0;i<c1;i++){
    //     cout<<"1"<<"+";
    // }
    // for(int i=0;i<c2;i++){
    //     cout<<"2"<<"+";
    // }
    // for(int i=0;i<c3;i++){
    //     cout<<"3";
    // }
    vector<char> answer;
    string s;
    cin>>s;
    for(int i=0;i<s.size();i++){
        if(s[i]!='+'){
            answer.push_back(s[i]);
        }
    }
    sort(answer.begin(),answer.end());
    for(int i =0;i<answer.size();i++){
        if(i!=answer.size()-1){
            cout<<answer[i]<<"+";
        }
        else{
            cout<<answer[i];
        }
    }
}
 
int main(){
    
    int t=1;
 
   
    // cin >> t;
 
    while(t--){
 
        solve();
        cout << "\n";
    }
    
    return 0;
}