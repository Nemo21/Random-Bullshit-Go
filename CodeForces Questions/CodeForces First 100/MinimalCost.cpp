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
    ll n,i,j=0,v,u;
    cin>>n>>u>>v;
    ll a[n+1],maxi=0;
    for(int i=1;i<n+1;i++){
        cin>>a[i];
    }
    for(int i=1;i<n+1;i++){
        if(i==n){
            maxi=max(llabs(a[i]-a[i-1]),maxi);
        }
        else if(i==1){
            maxi=max(llabs(a[i]-a[i+1]),maxi);
        }
        else{
            maxi=max(max(llabs(a[i]-a[i+1]),llabs(a[i]-a[i-1])),maxi);
        }
    }
    if(maxi>=2){
        cout<<0<<"\n";
    }
    else if(maxi==1){
        cout<<min(u,v)<<"\n";
    }
    else{
        cout<<min(v+u,2*v)<<"\n";
    }
}
 
int main(){
    
    int t=1;
    cin >> t;
 
    while(t--){
 
        solve();
        //cout << "\n";
    }
    
    return 0;
}