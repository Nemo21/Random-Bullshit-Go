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
    int k;
	cin>>k;
	vector<int>v(10,0);
	char arr[4][4];
	for(int i=0;i<4;i++){
		for(int j=0;j<4;j++){
			cin>>arr[i][j];
			if(arr[i][j]!='.')
			v[arr[i][j]-'0']++;
		}
	}
	for(int i=0;i<10;i++){
		if(v[i]>2*k){
			cout<<"NO";
			return ;
		}
	}
	cout<<"YES";
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