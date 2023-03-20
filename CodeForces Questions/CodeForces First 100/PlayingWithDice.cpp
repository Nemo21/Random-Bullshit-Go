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
    int a,b;
    cin>>a>>b;
    int countofA=0;
    int countofB=0;
    int countofDr=0;
    for(int i=1;i<=6;i++){
        if(abs(a-i)<abs(b-i)){
            countofA++;
        }
        if(abs(a-i)>abs(b-i)){
            countofB++;
        }
        if(abs(a-i)==abs(b-i)){
            countofDr++;
        }
    }
    cout<<countofA<<" "<<countofDr<<" "<<countofB;
}

 
int main(){
    
    int t=1;
 
   
    //cin >> t;
 
    while(t--){
 
        solve();
        cout << "\n";
    }
    
    return 0;
}