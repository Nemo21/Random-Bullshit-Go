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
    int n,a,b,c;
    cin>>n>>a>>b>>c;
    int arr[n+1];
    arr[0]=0;
    int x,y,z;
    for(int i=1;i<=n;i++){
        x=INT_MIN;
        y=INT_MIN;
        z=INT_MIN;
        if(i>=a){
            x=arr[i-a];
        }
        if(i>=b){
            y=arr[i-b];
        }
        if(i>=c){
            z=arr[i-c];
        }
        arr[i]=1+max(z,max(x,y));
    }
    cout<<arr[n];
}