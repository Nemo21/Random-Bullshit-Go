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
    ll num,budget;
    cin>>num>>budget;
    ll answer=0;
    vi vec(num);
    for( ll i=0;i<num;i++){
        cin>>vec[i];
    }
    sort(vec.begin(),vec.end());
    vi prefix(num,0);
    ll sum=0;
    for (ll i=0;i<num;i++){
        sum+=vec[i];
        prefix[i]=sum;
    }
    for( ll i=num-1;i>=0;i--){
        ll diff=budget-prefix[i];
        if(diff>=0 && diff/(i+1)>=0){
            answer+=(diff/(i+1))+1;
        }
    }
    cout<<answer<<endl;
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