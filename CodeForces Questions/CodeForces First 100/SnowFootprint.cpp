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
    int nblocks;
	string s;
	while(cin>>nblocks)
	{
		cin>>s;
		int st=-1,ed=-1;
		for(int i=0;i<s.size();++i)
		{
			if(s[i]=='L')
			{
				st=i;
				if(ed==-1)
				{
					ed=i-1;
				}
			}
			else if(s[i]=='R')
			{
				st=i;
				ed=i+1;
			}
		}
	    cout<<st+1<<' '<<ed+1<<'\n';
	}
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