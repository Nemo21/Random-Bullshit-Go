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
#define dic             map

void solve(){
    cin.tie(nullptr);
    ios::sync_with_stdio(false);
    string s; cin >> s;
    int res=1e9;
    string t="nineteen";
    map<char,int> mp;
    for(char c:s)mp[c]++;
    res=min(res,(mp['n']-1)/2);
    res=min(res,mp['i']);
    res=min(res,mp['t']);
    res=min(res,mp['e']/3);
    printf("%d\n",res);
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