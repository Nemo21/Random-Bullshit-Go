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
    if(n%2!=0){
        cout<<"-1"<<endl;
    }
    else{
        int arr[n+1];
        for(int i=1;i<=n;i++){
            arr[i]=i;
        }
        for(int i=1;i<=n-1;i++){
            swap(arr[i],arr[i+1]);
            i++;
        }
        for(int i=1;i<=n;i++){
            cout<<arr[i]<<" ";
        }
    }
    
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