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
    int words,meanings;
    cin>>words>>meanings;
    map<string,string> dic;
    string alpha,word,meaning;
    for(int i=0;i<meanings;i++){
        cin>>word>>meaning;
        dic[word]=meaning;
    }
    for(int i=0;i<words;i++){
        cin>>alpha;
        if(dic[alpha].size()<alpha.size()){
            cout<<dic[alpha]<<" ";
        }
        else{
            cout<<alpha<<" ";
        }
    }
    return;
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