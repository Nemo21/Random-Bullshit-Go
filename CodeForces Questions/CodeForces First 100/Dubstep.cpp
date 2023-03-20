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
    cin>>s1;
    bool istrue=true;
    for(int i=0;i<s1.length();i++){
        if(s1[i]=='W'&& s1[i+1]=='U' && s1[i+2]=='B'){
            i+=2;
            if(!istrue){
                cout<<" ";
            }
            continue;
        }
        else{
            istrue=false;
            cout<<s1[i];
        }
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