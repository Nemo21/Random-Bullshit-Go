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
#define dic             map
 
void solve(){
    int lengthoftable,widthoftable,radiusofplate;
    cin>>lengthoftable>>widthoftable>>radiusofplate;
    int diameterofplate=2*radiusofplate;
    if(diameterofplate<=min(lengthoftable,widthoftable)){
        cout<<"First"<<endl;
    }
    else{
        cout<<"Second"<<endl;
    }
    return ;
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