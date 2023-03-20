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
    string s;
    cin >> s;
    int n = s.size();
    vector<string> s1;
    string str = " ";
    int i = 0;
    while (i < n)
    {
        if (s[i] == '.')
        {
            i++;
        }
        else
        {
            while (i < n && s[i] != '.')
            {
                str += s[i];
                i++;
            }
            s1.push_back(str);
            str = " ";
        }
    }
    for (auto x : s1)
    {
        cout << x;
    }
    reverse(s1.begin(), s1.end());
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