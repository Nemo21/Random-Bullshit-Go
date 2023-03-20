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
    int n,m,k,arr[54];
    cin>>n>>m>>k;
 
    if(k>=m)
    {
        cout<<"0";
        return ;
    }
 
    int socket=k,cnt=0,flag=0;
 
    for(int i=0;i<n;i++)
        cin>>arr[i];
 
    sort(arr,arr+n);
 
    for(int i=n-1;i>=0;i--)
    {
        socket=socket-1+arr[i];
 
        cnt++;
        if(socket>=m)
            break;
    }
 
    if(socket<m)
        cout<<"-1";
    else
        cout<<cnt;
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