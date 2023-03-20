#include <bits/stdc++.h>
#include<vector>
 
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
    int m;
    cin>>n>>m;
    int arr[n][m];
    for(int i=0;i<n;i++)
    {
        arr[0][i]=1;
    }
    for(int j=0;j<m;j++)
    {
        arr[j][0]=1;
    }
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