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
    // ll n;
    // ll k;
    // cin>>n>>k;
    // vector<ll> v;
    // for(ll i=1;i<=n;i+=2){
    //     v.push_back(i);
    // }
    // for(ll i=2;i<=n;i+=2){
    //     v.push_back(i);
    // }
    // cout<<v[k-1];
    ll n,k;
    cin>>n>>k;
    if(k<=(n+1)/2){
        cout<<k*2-1<<"\n";
    }
    else{
        cout<<(k-(n+1)/2)*2<<"\n";
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