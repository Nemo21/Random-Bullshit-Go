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
#define FLP(i,a,b)      for(ll i=a;i<b;i++)
void solve(){
    ll n,k;
    cin>>n>>k;
    ll a[n];
    ll sum[n+1];
    sum[0]=0;
    for(ll i=0;i<n;i++){
        cin>>a[i];
        sum[i+1]=sum[i]+a[i]; //sum of all 
    }
    if(k<=n){
        ll ans= INT_MIN; 
        for(ll i=1;i+k-1<=n;i++){
            ans=max(ans,sum[i+k-1]-sum[i-1]+k*(k-1)/2);
        }
        cout<<ans<<endl;
    }
    else{
        ll ans=sum[n]+n*(k-n)+n*(n-1)/2;
        cout<<ans<<endl;
    }
    return ;
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