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
    int s,n;
    cin>>s>>n;
    pair<int,int> arr[1000];
    bool flag=1;
    for(int i=0;i<n;i++){
        cin>>arr[i].first>>arr[i].second;
    }
    sort(arr, arr+n);
    for(int i=0;i<n;i++){
        if(s<=arr[i].first){
            flag=0;
            break;
        }
        s+=arr[i].second;
    }
    if(flag){
        cout<<"YES"<<"\n";
    }
    else{
        cout<<"NO"<<"\n";
    }

    // vector<pair <ll,ll>> v;
    // for(int i=0;i<n;i++){
    //     int power,bonus;
    //     cin>>power>>bonus;
    //     v.push_back({power,bonus});
    // }
    // sort(v.begin(),v.end());
    // for(int i=0;i<=n;i++){
    //     if(v[0].first < s){
    //         s+=v[0].second;
    //     }
    //     else{
    //         cout<<"NO";
    //         return;
    //     }
    // }
    // cout<<"YES\n";

    // for(auto x : v){
    //     cout << x.ff << " " << x.ss << "\n";
    // }
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