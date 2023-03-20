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
    int n,gifted,arr[4][5001],count[4]={0},nteam;
    cin>>n;
    for(int id=1;id<=n;id++){
        cin>>gifted;
        count[gifted]++;
        arr[gifted][count[gifted]]=id;
    }
    nteam = min(min(count[1],count[2]),count[3]);
    cout<<nteam<<endl;
    for(int i=1;i<=nteam;i++){
        cout<<arr[1][i]<<" "<<arr[2][i]<<" "<<arr[3][i]<<endl;
        
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