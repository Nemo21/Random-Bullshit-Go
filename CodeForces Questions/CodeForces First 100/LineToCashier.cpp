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
    int cashier, queue, person, timeforoneitem;
	cin >>cashier;
	int k[cashier];
	for(queue = 0; queue < cashier; queue++)
		cin >>k[queue];
 
	int ans = 1000000000, totaltime = 0;
 
	for(queue = 0; queue < cashier; queue++) {
		totaltime = 0;
		for(person = 0; person < k[queue]; person++) {
			cin >>timeforoneitem;
			totaltime += 5*timeforoneitem+15;  ///needs 5secnds ti scan one item b items and 15 secs to take money and return change
		}
		ans = min(ans, totaltime); //find min secs 
	}
	cout <<ans;
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