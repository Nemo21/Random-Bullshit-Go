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
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    int Misha=max((3*a)/10,a-a/250*c);
    int Vasya=max((3*b)/10,b-b/250*d);
    if(Misha>Vasya){
        cout<<"Misha";
        return;
    }
    else if(Misha<Vasya){
        cout<<"Vasya";
        return;
    }
    else{
        cout<<"Tie";
        return;
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