#include <bits/stdc++.h>
 
using namespace std;
 
#define ll              long long
#define pb              push_back
#define mp              make_pair
#define ff              first
#define ss              second
#define pii             pair<ll,ll>
#define vi              vector<ll>
#define vt(type)        vector<type>
#define si              set<ll>
int find(double prob){
    return ceil(sqrt(2*365*log(1-(1-prob))));
}
void solve(){
    int n;
    cin>>n;
    int zero=0;
    int ans=1;
    while(n%10==0)
    {
        zero++;
        n=n/10;
    }
    ans=ans*n;
    cout<<ans;
    while(zero){
        cout<<0;
        zero--;
    }
    return ;
}

 
int main(){
    int t=1;
    cin >> t;
    int zero=0;
    int ans=1;
    while(t--){
        //solve();
        //cout << "\n";
        int n;
        cin>>n;
        while(n%10==0)
        {
            zero++;
            n=n/10;
        }
        ans=ans*n;
    }
    cout<<ans;
    while(zero){
        cout<<0;
        zero--;
    }
    return 0;
}