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
    int currentmin=1;
    int noofbestmoments;
    int skipnoofmins;
    int count=0;
    cin>>noofbestmoments>>skipnoofmins;
    int start,end;
    for(int i=0;i<noofbestmoments;++i){
        cin>>start>>end;
        while (start-currentmin>=skipnoofmins){
            currentmin+=skipnoofmins;
        }
        count+=(end-currentmin+1);
        currentmin=end+1;
    }
    cout<<count;
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