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
    string s1,s2;
    int count=0;
    cin>>s1>>s2;
    for(int i=0;i<s1.size();i++){
        if(s1[i]!=s2[i]){
            count++;
        }
    }
    sort(s1.begin(),s1.end());
    sort(s2.begin(),s2.end());
    if(s1==s2 && count==2){
        cout<<"YES";
    }
    else{
        cout<<"NO";
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