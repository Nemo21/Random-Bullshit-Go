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

void solve(){
    ll myatt,myheal,bakemonoatt,bakemonoheal;
    ll coins,att,heal;
    cin>>myheal>>myatt>>bakemonoheal>>bakemonoatt>>coins>>att>>heal;
    bool flag=false;
    for(ll i=0;i<=coins;i++){
        ll newheal=myheal+(i*heal);
        ll newatt=myatt+((coins-i)*att);
        ll timekillbakemono=(bakemonoheal)/newatt;
        if(bakemonoheal%newatt){
            timekillbakemono++;
        }
        ll timetogetkill=(newheal)/bakemonoatt;
        if(newheal%bakemonoatt){
            timetogetkill++;
        }
        if(timekillbakemono<=timetogetkill){
            flag=true;
            break;
        }
    }
    if(flag){
        cout<<"YES"<<endl;
        return;
    }
    else{
        cout<<"NO"<<endl;
        return;
    }
    return ;
}
 
int main(){
    int t=1;
    cin >> t;
    while(t--){
        solve();
       // cout << "\n";
    }
    return 0;
}