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
    int arr[n+1]={0};
    int p;
    int q;
    int level;
    cin>>p;
    for(int i=0;i<p;i++){
        cin>>level;
        arr[level]=1;
    }
    cin>>q;
    for(int i=0;i<q;i++){
        cin>>level;
        arr[level]=1;
    }
    for(int i=1;i<=n;i++){
        if(arr[i]==0){
            cout<<"Oh, my keyboard!";
            return ;
        }
    }
    cout<<"I become the guy.";

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