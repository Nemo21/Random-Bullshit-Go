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
    int Z,Y,A,B,C;
    cin>>Z>>Y>>A>>B>>C;
    int X=Z-Y;
    if(X>=(A+B+C)){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
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