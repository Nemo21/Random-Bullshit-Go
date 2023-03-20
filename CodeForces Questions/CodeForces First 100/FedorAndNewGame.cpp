#include <bits/stdc++.h>
#include<bitset>
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
    int n,m,k;
    cin>>n>>m>>k;
    bitset<32> arr[m+10]; //array of binary representation
    for(int i=0;i<m+1;i++){
        int x;
        cin>>x; //this is decimal number
        arr[i]=x;
    }
    int ans=0;
    for(int i=0;i<m;i++){
        int kdiff=0;
        for(int j=0;j<32;j++){
            if(arr[m][j]!=arr[i][j]){
                kdiff++;
            }
        }
        if(kdiff<=k){
            ans++;

        }
    }
    cout<<ans<<"\n";
    return 0;
}