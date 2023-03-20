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
    int rowandcoln,sum,row,col;
    cin>>rowandcoln>>sum;
    for(int row=1;row<=rowandcoln;row++){
        for(int col=1;col<=rowandcoln;col++){
            if(row==col){
                printf("%d ",sum);
            }
            else{
                printf("0 ");
            }
        }
        cout<<"\n";
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