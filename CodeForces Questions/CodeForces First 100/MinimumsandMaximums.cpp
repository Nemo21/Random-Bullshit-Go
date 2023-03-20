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
    ll l1,r1,l2,r2;
    cin>>l1>>r1>>l2>>r2;
    if(r2>=l1 && l2<=r1){
        cout<<max({l1,l2});
    }
    else{
        cout<<l1+l2;
    }
    return ;
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