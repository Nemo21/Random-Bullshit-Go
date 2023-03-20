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
    string s1;
    string k="hello";
    cin>>s1;
    int j=0;
    int count=0;
    int n=s1.size();
    for(int i=0;i<n;i++){
        if(s1[i]==k[j]){
            j++;
            count++;
            if(count==5){
                break;
            }
        }
    }
    if(count==5){
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