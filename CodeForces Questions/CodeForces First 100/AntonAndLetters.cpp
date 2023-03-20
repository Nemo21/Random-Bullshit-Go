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
    string s;
    set<char> se;
    getline(cin,s);
    for(int i=0;i<s.length();i++){
        if(s[i]==' ' || s[i]==',' || s[i]=='{' || s[i]=='}'){
            continue;
        }
        else{
            se.insert(s[i]);
        }
    }
    cout<<se.size();
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