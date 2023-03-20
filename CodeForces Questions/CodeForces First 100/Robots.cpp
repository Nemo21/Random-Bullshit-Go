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
    ll n,m;
    cin>>n>>m;
    vector<pair<ll,ll>> ve; //both x nd y
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            char ch;
            cin>>ch; //grid
            if(ch=='R'){
                ve.push_back({i,j}); 
            }
        }
    }
    for(int i=0;i<ve.size();i++){
        ll ith=ve[i].first; //ith x 
        ll jth=ve[i].second; //ith y
        int count=0; //operation ke baad kint robts still in grid
        for(int j=0;j<ve.size();j++){ 
            if(i!=j){ //ek ko lekar baaki ke saath check karna to make a common condition since attached to one controller
                int ith1=ve[j].first;
                int jth1=ve[j].second;
                if(ith1>=ith && jth1>=jth){
                    count++; //in grid
                }
            }
        }
        if(count==ve.size()-1){ //no of robts in grid yes
            cout<<"YES"; //then yes found a common command 
            return;
        }
    }
    cout<<"NO"; //no common command
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