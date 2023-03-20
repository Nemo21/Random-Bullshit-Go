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
    vector<pair<ll,ll>> vec;
    for(int i=0;i<n;i++){
        int a,b;
        cin>>a>>b;
        vec.push_back({a,b});
    }
    int count=0;
    for(int i=0;i<n;i++){
        bool left=false,right=false,up=false,down=false;
        for(int j=0;j<n;j++){
            if(i!=j){
                if(vec[i].second==vec[j].second && vec[j].first<vec[i].first){
                    left=true;
                }
                if(vec[i].second==vec[j].second && vec[j].first>vec[i].first){
                    right=true;
                }
                if(vec[i].first==vec[j].first && vec[j].second>vec[i].second){
                    up=true;
                }
                if(vec[i].first==vec[j].first && vec[j].second<vec[i].second){
                    down=true;
                }
            }
        }
        if(left && right&& up&& down){
            count++;
        }
    }
    cout<<count;
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