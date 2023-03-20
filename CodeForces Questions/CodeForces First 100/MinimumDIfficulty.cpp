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
    int n,h,mindiff=10000,index;
    cin>>n;
    vector<int>height;
    for(int i=0;i<n;i++){
        cin>>h;
        height.push_back(h);
    }
    for(int i=1;i<n-1;i++){
        if(height[i+1]-height[i-1]<mindiff){
            mindiff=height[i+1]-height[i-1];
            index=i;
        }
    }
    for(int i=1;i<n;i++){
        if(height[i]-height[i-1]> mindiff && (i!=index || i!=index+1)){
            mindiff=height[i]-height[i-1];
        }
    }
    cout<<mindiff;
    return;
}

 
int main(){
    
    int t=1;
 
   
    //cin >> t;
 
    while(t--){
 
        solve();
        cout << "\n";
    }
    
    return 0;
}