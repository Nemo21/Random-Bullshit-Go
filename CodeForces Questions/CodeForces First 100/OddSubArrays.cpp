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
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i]; //input
    }
    int count=0; //inversions
    int maxi=0; //max eleme
    for(int i=0;i<n;i++){
        if(maxi>arr[i]){ //gretest
            maxi=0; //new max
            count++; //inversion
        }
        else{
            maxi=max(maxi,arr[i]); //max lelo
        }
    }
    cout<<count; //count dedo
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