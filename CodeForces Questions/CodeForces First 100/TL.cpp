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
    int n,m;
    cin>>n>>m;
    ll arr1[n],arr2[m];
    ll maximum=0;
    ll minimum=INT_MAX;
    for(int i=0;i<n;i++){
        cin>>arr1[i];
        maximum=max(maximum,arr1[i]);
        minimum=min(minimum,arr1[i]);
    }
    for(int i=0;i<m;i++){
        cin>>arr2[i];
        if(arr2[i]<=maximum || arr2[i]<=2*minimum){ //in this case the wrong answer solutions can pass too 
            cout<<"-1";
            return;
        }
    }
    cout<<max(maximum,2*minimum);
    return;
    //2*min cuz of the fact that it has the most probable chance of being still less than the time 
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