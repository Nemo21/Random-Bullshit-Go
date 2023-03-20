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
    int n; 	// size of array
		cin >> n;
		float arr[n];	// allocationg n blocks of float
		for(int i = 0; i < n; i++)
        	cin >> arr[i];
			long long sum = 0;
		// calculating sum
		for(int i = 0; i < n; i++)
        	sum +=(arr[i]);
		int equal = 0;
		// iterating over array and checking for that condition.
		for(int i = 0; i < n; i++)
			if(((sum - arr[i]) / (n - 1)) == arr[i]) {
				equal = 1; 
				break;
			}
		if(equal == 1)
			cout << "YES";
		else
		  cout << "NO";
    return ;
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