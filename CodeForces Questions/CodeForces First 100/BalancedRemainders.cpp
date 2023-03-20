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
    int a;
    cin>>n;
    int r0=0,r1=0,r2=0;
    for(int i=0;i<n;i++){
        cin>>a;
        if(a%3==0){
            r0++;
        }
        else if(a%3==1){
            r1++;
        }
        else {
            r2++;
        }
    }
    cout<<max(r0-r2,max(r1-r0,r2-r1))<<endl;
    return;
}
 
int main(){
    int t=1;
    cin >> t;
    while(t--){
        solve();
        //cout << "\n";
    }
    return 0;
}