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
    int x,y,z;
    int sumx=0,sumy=0,sumz=0;
    while(n--){
        cin>>x>>y>>z;
        sumx+=x;
        sumy+=y;
        sumz+=z;
    }
    if(sumx==0 && sumy==0 && sumz==0){
        cout<<"YES";
    }
    else{
        cout<<"NO";
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