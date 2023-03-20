#include <bits/stdc++.h>
 
using namespace std;
#define ld              long double
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
    ll kl=0,n=0,k=0,kr=0,i=0;
    cin>>n;
    for(ll i=1;i<cbrt(n);i++){
        k=cbrt(n-i*i*i);
        if(i*i*i+k*k*k==n){
            kl=1;
            break;
        }
    }
    if(kl==1){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    return;
}
 
int main(){
    ll t=1;
    cin >> t;
    while(t--){
        solve();
        //cout << "\n";
    }
    return 0;
}