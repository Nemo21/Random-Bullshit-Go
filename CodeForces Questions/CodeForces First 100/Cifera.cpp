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
    ll int k,l,power=1,count=0;
    cin>>k>>l;
    while(pow(k,power)<=l){
        if(pow(k,power)==l){
            count=1;
            break;
        }
        power++;
    }
    if(count==1){
        cout<<"YES"<<endl<<power-1;
    }
    else{
        cout<<"NO";
    }
    return;
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