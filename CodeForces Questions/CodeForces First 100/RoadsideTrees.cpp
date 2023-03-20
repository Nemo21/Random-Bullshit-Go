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
    int a[100010];
	a[0]=0;
	int p=2*n-1;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		p+=abs(a[i]-a[i-1]);
	}
	cout<<p<<endl;
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