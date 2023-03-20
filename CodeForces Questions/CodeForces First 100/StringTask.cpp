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
    
    string ans="", s;
    cin>>s;
    int n=s.size();
 
    for(int i=0;i<n;i++){
        if(s[i]=='A' ||s[i]=='a'|| s[i]=='E' ||s[i]=='e'|| s[i]=='I' ||s[i]=='i'|| s[i]=='O' ||s[i]=='o'|| s[i]=='U' ||s[i]=='u'|| s[i]=='Y' ||s[i]=='y'){
            continue;
        }
        else{
            s[i] = tolower(s[i]);
            ans= ans + '.' + s[i];
        }
    }
        cout<<ans;
 
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