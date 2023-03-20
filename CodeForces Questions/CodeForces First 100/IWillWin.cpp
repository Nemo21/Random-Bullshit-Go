#include <bits/stdc++.h>
#include<algorithm>
 
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
ll mod = 1e9 + 7;

ll modinv(ll num){
    for(ll x=1;x<mod;x++){
        if(((num%mod)*(x%mod))%mod==1){
            return x;
        }
    }
    return 0;
}
// a = 4
//m= mod(1e9 + 7)
//mod inv(4 mod(mod)) =ans
void solve(){
    ll newans;
    ll n,p,q;
    ll ans;
    cin>>n>>p>>q;
    if(p==q){
        cout<<"1";
    }
    else{
        ans=(p/(n+q));
        newans=ans%mod;
        cout<<modinv(newans);
    }
    return;
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