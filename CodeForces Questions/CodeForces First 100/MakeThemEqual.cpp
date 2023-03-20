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
    int n, i, cnt = 0, ind = 0;
		char c, s;
		cin >> n >> c;
		for(i = 1; i <= n; i++) {
            cin >> s;
			if(s != c) cnt++;
			else ind = i;
		}
		if(cnt == 0) {
			cout << "0\n";
		}
		else {
			if(ind > n / 2) {
				cout << "1\n" << ind << "\n";
			}
			else cout << "2\n" << n-1 << " " << n << "\n";
		}
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