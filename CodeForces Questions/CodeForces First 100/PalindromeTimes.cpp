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
    int h,m;
    char c;cin>>h>>c>>m;
 
    while (1>0)
    { m++;
        h+=(m/60);
        m%=60;
        h%=24;
        if (h/10==m%10 && h%10==m/10) break;
    }
    cout<<h/10<<h%10<<":"<<m/10<<m%10;
    return ;
    
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