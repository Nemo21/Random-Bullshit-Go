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
    ll n;
    cin>>n;
    string cha;
    cin>>cha;
    ll ans=0,count=0;//no of zeros 
    char ch=cha[0];
    for(ll i=0;i<n;i++){
        if(count==0){
            count++;
            ch=cha[i];
            continue;
        }
        if(cha[i]==ch){ //eq 
            count++;
        }
        else{
            if(count&1){ //count odd include previous different character since only frequency needed
                ans++;
                count=0;
            }
            else{ //count even
                count=1;
                ch=cha[i];
            }
        }
    }
    cout<<ans;
    return ;
}

 
int main(){
    
    int t=1;
 
   
   cin >> t;
 
    while(t--){
 
        solve();
        cout << "\n";
    }
    
    return 0;
}