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

 
int main(){
    int n,m;
    cin>>n>>m;
    int ini=1;
    ll time=0;
    for(int i=0;i<m;i++){
        int preloc;
        cin>>preloc;
        if(preloc>=ini){
            time+=preloc-ini;
        }
        else{
            time+=n-(ini-preloc);
        }
        ini=preloc; //now to new house
    }
    cout<<time;
    return 0;
}