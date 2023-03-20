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
    int n;
    cin>>n;
    string s;
    cin>>s;
    for(int i=0;i<n/2;i++){
        if(s[i]=='R' && s[i+n/2]=='L'){
            cout<<i+1+n/2<<" "<<i+1<<endl;
        }
        else{
            cout<<i+1<<" "<<i+1+n/2<<endl;
        }
    }
    return;
}
 
int main(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int t=1;
 
   
    //cin >> t;
 
    while(t--){
 
        solve();
        cout << "\n";
    }
    
    return 0;
}