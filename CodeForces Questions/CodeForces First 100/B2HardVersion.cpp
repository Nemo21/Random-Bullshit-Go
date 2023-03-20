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
    int  n;
	string s;
    int x = 0, y = 0, L = -1;
		cin >> n >> s;
		for (int i = 0; i < n; i += 2) {
			if (s[i] != s[i + 1]) x += 1;
			else {
				if (L != s[i]) y += 1;
				L = s[i];
			}
		}
		cout << x << " " << max(y, 1) << endl;
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