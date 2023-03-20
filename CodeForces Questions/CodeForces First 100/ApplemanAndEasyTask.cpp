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
    int c=0;
    ll n; cin>>n;
    char a[n][n];
    bool even=true;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin>>a[i][j];
        }
    }
    for(int i=0; i<n; i++){
        c=0;
        for(int j=0; j<n; j++){
            if(i-1>=0 && a[i-1][j]=='o'){ //if side in index and is o for row 
                c++;
            }
            if(i+1<n && a[i+1][j]=='o'){ //if in index and is 0 for adjacent row
                c++;

            } 
            if(j-1>=0 && a[i][j-1]=='o'){ //for col 1
                c++;

            } 
            if(j+1<n && a[i][j+1]=='o'){ //for col+!
                c++;

            } 
            if(c%2==1){ //if not divisible
                even = false;    
            } 
        }
    }
    
    if(even){
        cout<<"YES"<<endl;   
    } 
    else{
        cout<<"NO"<<endl;
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