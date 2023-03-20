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
    int diff=n/3;
    if(n%3==0){
        cout<<diff<<" "<<diff+1<<" "<<diff-1;
        return;
    }
    else if(n%3==1){
        cout<<diff<<" "<<diff+2<<" "<<diff-1;
        return;
    }
    else{
        cout<<diff+1<<" "<<diff+2<<" "<<diff-1;
        return;
    }
    return;
    /*
    ll n;
    cin>>n;
    ll x=n/3,y=n/3,z=n/3;
    y++;
    x++;
    ll left=n%3;
    if(left==2){
        x++; //1st
        y++; // 2nd
    }
    if(left==1){
        x++; //1st jo highest hoga but min no of blocks se
    }
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