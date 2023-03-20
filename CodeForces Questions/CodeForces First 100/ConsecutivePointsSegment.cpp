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
    int l;
	cin>>l;
	int arr[l+2];
	for(int i = 0 ;i<l;++i)cin>>arr[i];
	if(arr[l-1]-arr[0]-l-1>0)cout<<"NO\n";
	else cout<<"YES\n";
    return ;
}
 
int main(){
    int t=1;
    cin >> t;
    while(t--){
        solve();
       // cout << "\n";
    }
    return 0;
}