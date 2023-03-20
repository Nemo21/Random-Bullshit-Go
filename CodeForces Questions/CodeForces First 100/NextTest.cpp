#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define pii pair<ll, ll>
#define vi vector<ll>
#define vt(type) vector<type>
#define si set<ll>

void solve()
{
   int n;
	cin>>n;
	vector<int>arr(3001,0);
	int l;
	for(int i=0;i<n;i++){
		cin>>l;
		arr[l]++;
	}
	for(int i=1;i<=3000;i++){
		if(arr[i]==0){
			cout<<i;
			return;
		}
	}
	cout<<3001;
}

int main()
{

    int t = 1;

    // cin >> t;

    while (t--)
    {

        solve();
        cout << "\n";
    }

    return 0;
}