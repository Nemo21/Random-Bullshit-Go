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
    int noofints;
    cin>>noofints;
    int gcd=0;//init gcd with 0
    for(int i=0;i<noofints;i++){
        int nint;
        cin>>nint;
        gcd=__gcd(nint,gcd); //first 1,0 then 1,2
    }
    cout<<gcd*noofints; //1*2
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