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
bool isPrime(int n){
    if(n<=1){
        return false;
    }
    if(n<=3){
        return true;
    }
    if(n%2==0 || n%3==0){
        return false;
    }
    for (int i = 5; i*i <=n; i=i+6){
        if(n%i==0 || n%(i+2)==0){
            return false;
        }
    }
    return true;
}
void solve(){
    int n;
    cin>>n;
    ll arr[n+1];
    for(int i=1;i<n+1;i++){
        cin>>arr[i];
    }
    int ans=0;
    for(int i=1;i<=n;i++){
        for(int j=arr[i]-i;j<=n;j+=arr[i]){
            if(j>=0){
                if(arr[i]*arr[j]==i+j && i<j){
                    ans++;
                }
            }
        }
    }
    cout<<ans<<endl;
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