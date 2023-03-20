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
    int n, k;
    cin>>n>>k;
    string s;
    cin>>s; 
    bool lastzero = false;
    if(s[n-1]=='0') lastzero = true;

    int ans = 0;
    ans += (s[0] - '0')*10;
    ans += (s[n-1] - '0')*1;
    for(int i=1; i<n-1; i++){
        ans += (s[i]-'0')*11;
    } 
    if(lastzero){
        int lastone = -1;
        for(int i=n-2; i>=0; i--){
            if(s[i]=='1') {
                lastone = i;
                break;
            }
        }
        if((lastone != -1) && (k>=(n-1-lastone))){
            if(lastone>0) ans -= 10;
            else ans -= 9;
    
            k -= n-1-lastone;
            swap(s[lastone], s[n-1]);
        }
    }
    
    bool firstzero = false;
    if(s[0]=='0') firstzero = true;
    
    if(firstzero){
        int firstone = -1;
        for(int i=1; i<n-1; i++){
            if(s[i]=='1'){
                firstone = i;
                break;
            }
        }
    
        if(firstone != -1 && k>=firstone){
            ans -= 1;
            k -= firstone;
            swap(s[firstone], s[0]);
        }
    }
    
    cout<<ans;
    return;
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