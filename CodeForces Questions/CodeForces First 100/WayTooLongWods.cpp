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
    string string;
    cin>>string;
    int len=string.size();
    if(len>10){
        cout<<string[0]<<len-2<<string[len-1];
    }
    else{
        cout<<string;
    }
 
}
 
int main(){
    
    int t=1;
 
    cin >> t;
 
    while(t--){
 
        solve();
        cout << "\n";
    }
    
    return 0;
}