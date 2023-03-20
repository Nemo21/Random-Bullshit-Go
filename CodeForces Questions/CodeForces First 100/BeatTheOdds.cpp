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
    int n;
    cin>>n;
    int even=0,odd=0;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        if(x%2==0){
            even++;
        }
        else{
            odd++;
        }
    }
    cout<<min(even,odd);
    return;
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