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
    string lever;
    cin>>lever;
    ll len=lever.length(),leftweight=0,rightweight=0,iter,index=lever.find('^');
    for(iter=0;iter<index;iter++){
        if(lever[iter]!='='){
            leftweight+=(index-iter)*(lever[iter]-'0');
        }
    }
    for(iter=index+1;iter<len;iter++){
        if(lever[iter]!='='){
            rightweight+=(iter-index)*(lever[iter]-'0');
        }
    }
    if(leftweight<rightweight){
        cout<<"right";
    }
    else if(rightweight<leftweight){
        cout<<"left";
    }
    else{
        cout<<"balance";
    }
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