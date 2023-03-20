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
    int y,k,n;
    bool flag=0;
    int x;
    cin>>y>>k>>n;
    for(int i=k;i<=n;i+=k){
        x=i-y;
        if(x>=1){
            cout<<x<<" ";
            flag=1;
        }
    }
    if(!flag){
        cout<<"-1";
        return;
    }
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