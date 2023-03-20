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
    string s1,s2;
    cin>>s1;
    cin>>s2;
    transform(s1.begin(), s1.end(), s1.begin(), ::tolower);
    transform(s2.begin(), s2.end(), s2.begin(), ::tolower);
    for(int i=0;i<=s1.size();i++){
            if(s1[i]<s2[i]){
                cout<<"-1";
                return ;
            }
            if(s1[i]>s2[i]){
                cout<<"1";
                return ;
            }
    }
    cout<<"0";
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