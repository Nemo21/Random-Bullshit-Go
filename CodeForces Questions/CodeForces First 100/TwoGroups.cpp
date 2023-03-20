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
    cin >> n;
    ll sum1 = 0;
    ll sum2 = 0;
    int num = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> num;
        if (num >= 0)
        {
            sum1 = sum1 + num;
        }
        else
        {
            sum2 = sum2 + num;
        }
    }
    cout << abs(abs(sum1) - abs(sum2));
    return;
}

int main()
{
    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
        cout << "\n";
    }
    return 0;
}