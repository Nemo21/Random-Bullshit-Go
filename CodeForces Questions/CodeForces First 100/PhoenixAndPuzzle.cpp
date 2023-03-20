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
bool isPerfSQ(long double x){
    if(x>=0){
        ll s=sqrt(x);
        return (s*s==x);
    }
    return false;
}
 
int main(){
    int t=1;
    cin >> t;
    while(t--){
        int n;
        cin>>n;
        if(n%2!=0){
            cout<<"NO\n";
            continue;
        }
        int z=n/2;
        if(isPerfSQ(z)){
            cout<<"YES\n";
            continue;
        }
        if(n%4!=0){
            cout<<"NO\n";
            continue;
        }
        z=n/4;
        if(isPerfSQ(z)){
            cout<<"YES\n";
            continue;
        }
        cout<<"NO\n";
       // cout << "\n";
    }
    return 0;
}