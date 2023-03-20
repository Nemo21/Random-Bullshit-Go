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
    int array[100];
    int n;
    cin>>n;
    for(int i=0;i<n;++i)
    {
        cin>>array[i];
    }
    bool valid=true;
    for(int i=0;i<n;++i){
        int count=0;
        for(int j=0;j<n;++j){
            if(array[i]==array[j]){
                ++count;
            }
        }
        if(n<2*count-1){
            valid=false;
            break;
        }
    }
    if(valid){
        cout<<"YES\n";
    }
    else{
        cout<<"NO\n";
    }
    return;
}
 
int main(){
    
    int t=1;
 
   
    // cin >> t;
 
    while(t--){
 
        solve();
        cout << "\n";
    }
    
    return 0;
}