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
    int nofchildren,time;
    cin>>nofchildren>>time;
    string sith;
    cin>>sith;
    while(time--){
        for(int i=0;i<nofchildren-1;i++){
            if(sith[i]=='B' && sith[i+1]=='G'){
                swap(sith[i],sith[i+1]);
                i++;
            }
        }
    }
    cout<<sith;
    return 0;
}