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
    ll n,v;
    bool flag=true;
    ll a,z;
    vector<ll> ve;
    ll count=0;
    cin>>n>>v;
    for(int i=1;i<=n;i++){
        cin>>a;
        flag=true;
        for(int x=0;x<a;x++){
            cin>>z;
            if(v>z && flag==true){
                count++;
                ve.push_back(i);
                flag=false;
            }
        }
    }
    cout<<count<< endl;
    sort(ve.begin(),ve.end());
    for(int k=0;k<count;k++){
        cout<<ve[k]<<" ";
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