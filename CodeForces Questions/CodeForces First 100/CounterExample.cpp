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
    ll a,b;
    cin>>a>>b;
    if((b-a<2) || ((a%2!=0) && ((b-a)==2))){
        cout<<"-1"<<endl;
        return;
    }
    if(a%2==0){
        cout<<a<<" "<<a+1<<" "<<a+2;
    }
    else{
        cout<<a+1<<" "<<a+2<<" "<<a+3;
    }
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