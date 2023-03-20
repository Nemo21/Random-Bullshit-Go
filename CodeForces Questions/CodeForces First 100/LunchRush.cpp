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
    int n,k;
    int f,t;
    int max_f,cF;
    cin>>n>>k;
    cin>>f>>t;
    if(t>k){
        max_f=f-(t-k);
    }
    else{
        max_f=f;
    }
    n--;
    while(n--){
        cin>>f>>t;
        if(t>k){
            cF=f-(t-k);
        }
        else{
            cF=f;
        }
        if(cF>max_f){
            max_f=cF;
        }
    }
    cout<<max_f<<endl;
    return 0;
}