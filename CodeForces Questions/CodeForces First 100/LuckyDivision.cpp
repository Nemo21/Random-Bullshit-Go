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
    int input;
    cin>>input;
    int arr[13]={4,7,47,74,77,44,444,447,474,477,777,774,744};
    bool istrue=false;
    for(int i =0;i<13;i++){
        if(input%arr[i]==0){
            istrue=true;
            break;
        }
    }
    if(istrue){
        cout<<"YES";
    }
    else{
        cout<<"NO";
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