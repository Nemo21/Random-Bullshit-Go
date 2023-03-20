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
    int le = -2e9, ri = 2e9, x, n;
    string s;
    char c;
    cin >> n;
	while (n--) {
		cin >> s >> x >> c;
		if (c == 'N') {
			if (s == ">") s = "<=";
			else if (s == ">=") s = "<";
			else if (s == "<") s = ">=";
			else s = ">";
		}
		if (s == ">=") le = max(le, x);
		else if (s == ">") le = max(le, x + 1);
		else if (s == "<=") ri = min(ri, x);
		else ri = min(ri, x - 1);
	}
	if (le > ri) cout << "Impossible";
	else cout << le;
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