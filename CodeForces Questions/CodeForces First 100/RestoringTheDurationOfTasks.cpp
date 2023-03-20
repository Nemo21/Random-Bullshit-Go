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
    ll n;
    cin>>n;
    int A[n];
    int B[n];
    for(int i=0;i<n;i++){
        cin>>A[i];
    }
    for(int i=0;i<n;i++){
        cin>>B[i];
    }
    for(int i=0;i<n;i++){
        if(i==0){
            cout<<B[i]-A[i]<<" ";
        }
        else{
            cout<<B[i]-max(A[i],B[i-1])<<" ";
        }
    }
    
    return;
    /*
    
    */
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