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
    int ans=(1<<20)-1;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        if(x!=i){
            ans&=x;
        }
    }
    cout<<ans;
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