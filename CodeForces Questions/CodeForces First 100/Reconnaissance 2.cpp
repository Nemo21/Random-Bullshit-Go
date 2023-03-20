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
    int a[n];
    for (int i = 0; i < n; i++) cin >> a[i];
    int x = n, y = 1;
    int ans = abs(a[0] - a[n-1]), temp;
    for (int i = 1; i < n; i++){
        temp = abs(a[i] - a[i-1]);
        if (temp < ans){
            ans = temp;
            x = i+1;
            y = i;
        }
    }
    cout << x << " " << y << endl;
    return;

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