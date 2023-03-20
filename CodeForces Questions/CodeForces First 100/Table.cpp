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
    int nrow,mcol,a;
    cin>>nrow>>mcol;
    bool TwoIs=0;
    for(int i=0;i<nrow;i++){
        for(int j=0;j<mcol;j++){
            cin>>a;
            if(a==1){
                if(i==0 || i==(nrow-1)){
                    TwoIs=1;
                }
                if(j==0 || j==(mcol-1)){
                    TwoIs=1;
                }
            }
        }
    }
    if(TwoIs){
        cout<<2<<endl;
    }
    else{
        cout<<4<<endl;
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