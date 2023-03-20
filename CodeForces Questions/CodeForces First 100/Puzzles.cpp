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
    int m;
    int arr[m];
    cin>>n>>m;
    for(int i=0;i<m;i++){
        cin>>arr[i];
    }
    sort(arr,arr+m);
    int least=arr[n-1]-arr[0];
    for(int i=1;i<=m-n;++i){
        if(arr[i+n-1]-arr[i]<least){
            least=arr[i+n-1]-arr[i];
        }
    }
    cout<<least<<"\n";
        
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