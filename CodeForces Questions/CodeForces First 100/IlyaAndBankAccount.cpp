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
    ll n; //-123
    cin>>n;
    if(n>=0){
        cout<<n<<"\n";
        return ;
    }
    if(n<0){
        ll a=n/10; //-12
        ll b=(n/100)*10+(n%10); //-13
        if(a>=b){
            cout<<a<<"\n";
            return ;
        }
        else{
            cout<<b<<"\n";
            return;
        }
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