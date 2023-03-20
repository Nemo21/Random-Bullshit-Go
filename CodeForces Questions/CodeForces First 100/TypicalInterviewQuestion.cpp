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

bool substring(string s, string str)
{
    // s.find(str) != string::npos)
    if (s.find(str) != string::npos)
    {
        return true;
    }
    return false;
    // int m = s.size();
    // int n = str.size();
    // for (int i = 0; i < m; i++)
    // {
    //     int j;
    //     for (j = 0; j < n; j++)
    //     {
    //         if (s.substr(i, j) == str)
    //         {
    //             return true;
    //         }
    //         return false;
    //     }
    // }
    // return false;
}

void solve()
{
    string s = "";
    for (int i = 1; i <= 100; i++)
    {
        if (i % 3 == 0)
        {
            s += 'F';
        }
        if (i % 5 == 0)
        {
            s += 'B';
        }
        if (i % 3 == 0 && i % 5 == 0)
        {
            s += 'F';
            s += 'B';
        }
    }
    int n;
    cin >> n;
    string str;
    cin >> str;
    bool res = substring(str, s);
    if (res == 1)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
    return;
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
        cout << "\n";
    }
    return 0;
}