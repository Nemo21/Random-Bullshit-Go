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
    int n,m;
    cin>>n>>m;
    int temp,posi=0,negi=0;
    vector<int> v(n);
    for(auto &element: v){
        cin>>element;
    }
    posi=count(v.begin(),v.end(),1);
    negi=count(v.begin(),v.end(),-1);
    int mini=min(negi,posi);
    string out="";
    int left,right;
    for(int i=0;i<m;++i){
        cin>>left>>right;
        if((right-left+1)%2==0 && (right-left+1)/2<=mini){
            out+="1\n";
        }
        else{
            out+="0\n";
        }
    }
    cout<<out;
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