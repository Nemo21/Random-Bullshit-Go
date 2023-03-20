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
    int kdigits,sumofkdigits;
    cin>>kdigits>>sumofkdigits;
    if(sumofkdigits==0){
        if(kdigits>1){
            cout<<"No solution";
        }
        else{
            cout<<'0'<<"\n";
        }
        return;
    }
    cout<<sumofkdigits;
    for(int i=0;i<kdigits-1;i++){
        cout<<'0';
    }
    cout<<"\n";
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