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
    int lh=INT_MIN,li=0;
    int rh=INT_MAX,ri=0;
    int h;
    for(int i=0;i<n;i++){
        cin>>h;
        if(h>lh){
            lh=h;
            li=i;
        }
        if(h<=rh){
            rh=h;
            ri=i;
        }
    }
    int res=li+n-1-ri;
    if(li<ri){
        cout<<res;
    }
    else{
        cout<<res-1;
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