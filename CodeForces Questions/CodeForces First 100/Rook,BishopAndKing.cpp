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
    int r1,c1,r2,c2;
    cin>>r1>>c1>>r2>>c2;
    if(r1==r2 || c1==c2){
        cout<<"1 ";
    }
    else{
        cout<<"2 ";
    }
    if(r1+c1==r2+c2 || r1-c1==r2-c2){
        cout<<"1 ";
    }
    else if((r1+c1)%2!=(r2+c2)%2){
        cout<<"0 ";
    }
    else{
        cout<<"2 ";
    }
    cout<<max(abs(r1-r2),abs(c1-c2));
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