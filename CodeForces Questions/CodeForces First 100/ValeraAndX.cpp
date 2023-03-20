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
    char arr[n][n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    char diagonal=arr[0][0];
    char nondiagonal=arr[0][1];
    if(diagonal==nondiagonal){
        cout<<"NO";
        return;
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==j || i+j==n-1){
                if(arr[i][j]!=diagonal){
                    cout<<"NO";
                    return;
                }
            }
            else{
                if(arr[i][j]!=nondiagonal){
                    cout<<"NO";
                    return;
                }
            }
        }
    }
    cout<<"YES";
    
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